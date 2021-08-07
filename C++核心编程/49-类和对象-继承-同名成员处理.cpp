#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		a = 100;
	}
	void func()
	{
		cout << "父类同名函数调用" << endl;
	}
	void func(int a)
	{
		cout << "父类同名函数调用 " << a << endl;
	}
	int a;
};

class Son : public Base
{
public:
	Son()
	{
		a = 200;
	}
	void func()
	{
		cout << "子类同名函数调用" << endl;
	}
	int a;
};

int main()
{
	Son s = Son();
	// 子类和父类虽然成员属性同名, 但是依然存在两块空间, 实继承不存在覆盖
	cout << sizeof(s) << endl;

	cout << s.a << endl;
	// 子类调用父类同名属性: 子类对象.父类名::同名属性
	cout << s.Base::a << endl;

	s.func();
	// 子类调用父类同名函数: 子类对象.父类名::同名函数
	s.Base::func();

	// 重载的情况下, 虽然子类不存在有参函数
	// 但是如果子类中出现父类同名的成员函数, 子类的成员函数会屏蔽掉父类中所有的成员函数
	// 此时如果想调用父类的有参函数, 还是需要加作用域 
	s.Base::func(100);

	system("pause");
	return 0;
}