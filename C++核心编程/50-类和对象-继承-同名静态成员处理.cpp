#include <iostream>
using namespace std;

// 子类和父类具有同名的静态成员, 如何访问?
// 和 49-非静态成员 处理一致
// 即: 子类静态成员直接访问, 父类静态成员加作用域

class Base
{
public:
	static void func()
	{
		cout << "父类静态同名函数调用" << endl;
	}
	static void func(int a)
	{
		cout << "父类静态同名函数调用 " << a << endl;
	}
	static int a;
};
int Base::a = 100;

class Son : public Base
{
public:
	static void func()
	{
		cout << "子类静态同名函数调用" << endl;
	}
	static int a;
};
int Son::a = 200;

int main()
{
	Son s = Son();
	// 因为是静态成员, 所以只存在一个空对象的内存空间
	cout << sizeof(s) << endl;

	cout << s.a << endl;
	// 子类调用父类静态同名属性: 子类对象.父类名::同名属性
	cout << s.Base::a << endl;

	s.func();
	// 子类调用父类静态同名函数: 子类对象.父类名::同名函数
	s.Base::func();

	// 重载的情况下, 虽然子类不存在静态有参函数
	// 但是如果子类中出现父类同名的静态成员函数, 子类的静态成员函数会屏蔽掉父类中所有的静态成员函数
	// 此时如果想调用父类的静态有参函数, 还是需要加作用域 
	s.Base::func(100);

	system("pause");
	return 0;
}