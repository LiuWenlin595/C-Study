#include <iostream>
using namespace std;

// 语法: class 子类 : 继承方式 父类
// 继承方式有三种: 公共继承, 保护继承, 私有继承 

class Base
{
public:
	int a = 10;
protected:
	int b = 20;
private:
	int c = 30;
};

class Son1 : public Base
{
	// 使用公共继承, 父类访问权限在子类依旧保留相同的访问权限
	// 即public -> public, protected -> protected, private -> 不可访问
public:
	void func()
	{
		cout << a << endl;
		cout << b << endl;
		// cout << c << endl;  // private不可访问
	}
};

class Son2 : protected Base
{
	// 使用保护继承, 父类的public和protected属性在子类变为protected访问权限
	// 即public -> protected, protected -> protected, private -> 不可访问
public:
	void func()
	{
		cout << a << endl;
		cout << b << endl;
		// cout << c << endl;  // private不可访问
	}
};

class Son3 : private Base
{
	// 使用私有继承, 父类的public和protected属性在子类变为private访问权限
	// 即public -> private, protected -> private, private -> 不可访问
public:
	void func()
	{
		cout << a << endl;
		cout << b << endl;
		// cout << c << endl;  // private不可访问
	}
};

int main()
{
	Son1 s1 = Son1();
	Son2 s2 = Son2();
	Son3 s3 = Son3();

	cout << s1.a << endl;
	// 报错, protected属性在类外不可访问
	// cout << s1.b << endl;
	// cout << s2.a << endl;
	// cout << s2.b << endl;

	// 报错, private属性在类外不可访问
	// cout << s3.a << endl;
	// cout << s3.b << endl;

	system("pause");
	return 0;
}