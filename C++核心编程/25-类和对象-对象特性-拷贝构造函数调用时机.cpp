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

// 拷贝构造函数调用时机

// 1. 使用一个已经创建完毕的对象来初始化一个新的对象
void test1()
{
	cout << "test1" << endl;
	Person p1 = Person(10);
	Person p2 = Person(p1);
	cout << p1.age << " " << p2.age << endl;
}
// 2. 值传递的方式给函数参数传值
void doWork1(Person p)
{
	cout << p.age << endl;
	cout << &p << endl;
}
void test2()
{
	cout << "test2" << endl;
	Person p = Person(20);
	cout << &p << endl;
	doWork1(p);   // 调用拷贝构造函数, 构造形参
}

// 3. 值方式返回局部对象
Person doWork2()
{
	Person p = Person(30);
	cout << &p << endl;
	return p;
}
void test3()
{
	cout << "test3" << endl;
	Person p = doWork2();  // 调用拷贝构造函数
	cout << &p << endl;
	cout << p.age << endl;
}

int main()
{
	test1();
	test2();
	test3();

	system("pause");
	return 0;
}