#include <iostream>
using namespace std;

// 语法: class 子类: 继承方式 父类1, 继承方式 父类2, ...

class Base1
{
public:
	Base1()
	{
		a = 100;
		same = 1000;
	}

	int a;
	int same;
};

class Base2
{
public:
	Base2()
	{
		b = 200;
		same = 2000;
	}

	int b;
	int same;
};

class Son : public Base1, public Base2
{
public:
	Son()
	{
		c = 300;
		d = 400;
	}

	int c;
	int d;
};

int main()
{
	Son s = Son();
	cout << sizeof(s) << endl;
	cout << s.a << " " << s.b << " " << s.c << " " << s.d << endl;
	// 当父类中出现同名成员, 需要加作用域区分
	cout << s.Base1::same << " " << s.Base2::same << endl;

	// 也可以采用 47-继承中的对象模型 中的可视化方法来查看对象成员分布

	system("pause");
	return 0;
}