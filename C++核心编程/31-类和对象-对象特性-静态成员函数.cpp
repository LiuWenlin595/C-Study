#include <iostream>
using namespace std;

// 静态成员函数
// 所有对象共享同一个函数
// 静态成员函数只能访问静态成员变量

class Person
{
public:
	static void func()
	{
		cout << a << endl;
		a = 100;
		cout << a << endl;
		// 报错, 静态函数不能访问非静态变量
		// 因为静态函数不知道改变哪一个对象的b, 只有静态变量才会共享一份数据
		// b = 200; 
		cout << "static func调用" << endl;
	}

	static int a;
	int b;

private:
	static void func2()
	{
		cout << "private static func调用" << endl;
	}
};

int Person::a = 10;

int main()
{
	// 通过对象访问
	Person p;
	p.func();

	// 通过类名访问
	Person::func();

	// 静态成员函数也有访问权限
	//Person::func2();  // 报错, private无权限访问

	system("pause");
	return 0;
}