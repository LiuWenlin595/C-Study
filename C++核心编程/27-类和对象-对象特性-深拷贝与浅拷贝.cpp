#include <iostream>
using namespace std;

// 浅拷贝: 简单的赋值拷贝操作
// 深拷贝: 在堆区重新申请空间, 进行拷贝操作

class Person
{
public:
	Person()
	{
		cout << "无参构造函数" << endl;
	}
	Person(int a, int h)
	{
		age = a;
		height = new int(h);
		cout << "有参构造函数" << endl;
	}
	// 自己实现拷贝构造函数, 解决浅拷贝带来的问题
	Person(const Person& p)
	{
		age = p.age;
		// height = p.height;  // 编译器默认实现代码
		height = new int(*p.height);  // 深拷贝
		cout << "拷贝构造函数" << endl;
	}

	~Person()
	{
		// 析构代码, 将堆区开辟的数据做释放操作
		if (height != NULL)
		{
			delete height;
			height = NULL;
		}
		cout << "析构函数" << endl;
	}

	int age = 0;
	int* height;
};

void test()
{
	Person p1 = Person(10, 20);
	cout << p1.age << " " << *p1.height << endl;

	Person p2 = Person(p1);
	cout << p2.age << " " << *p2.height << endl;

	// 先进后出的原则
	// p2的拷贝构造函数执行浅拷贝, 析构的时候把*height指向的地址数据抹除
	// p1执行析构的时候也会重复释放一次内存, 造成报错, 实现了深拷贝构造函数就不会报错
}

int main()
{
	test();

	system("pause");
	return 0;
}