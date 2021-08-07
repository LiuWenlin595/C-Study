#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "无参构造函数" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "有参构造函数" << endl;
	}
	Person(const Person& p)
	{
		age = p.age;
		cout << "拷贝构造函数" << endl;
	}
	~Person()
	{
		cout << "析构函数" << endl;
	}

	int age = 0;
};

// 构造函数的调用规则
// 1. 创建一个类, C++编译器会给每个类都添加至少三个函数
// 默认构造（空实现）
// 有参构造 (空实现)
// 拷贝构造 (值拷贝)
void test1()
{
	// 注释掉拷贝构造, p2依旧有值
	Person p1 = Person(10);
	Person p2 = Person(p1);
	cout << p2.age << endl;
}
// 2. 如果写了有参构造函数, 编译器就不再提供默认构造, 依然提供拷贝构造
void test2()
{
	// 注释掉默认构造和拷贝构造, p1报错, p2和p3依旧可以初始化
	Person p1;
	Person p2 = Person(10);
	Person p3 = Person(p2);
	cout << p2.age << " " << p3.age << endl;
}
// 3. 如果写了拷贝构造函数, 编译器就不再提供默认构造和有参构造
void test3()
{
	// 注释掉默认构造和有参构造, p1和p2都报错
	Person p1;
	Person p2 = Person(10);
}
int main()
{
	test1();
	test2();
	test3();

	system("pause");
	return 0;
}