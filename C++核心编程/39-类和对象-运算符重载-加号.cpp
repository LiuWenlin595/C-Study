#include <iostream>
using namespace std;

// 概念: 对已有的运算符进行重新定义, 赋予其另一种功能, 以适应不同的数据类型
// 加号运算符重载作用: 实现两个自定义数据类型相加的运算 

class Person
{
public:
	//1. 成员函数重载+号
	Person operator+(Person &p)
	{
		Person tmp;
		tmp.a = this->a + p.a;
		tmp.b = this->b + p.b;
		return tmp;
	}

	int a;
	int b;
};

// 2. 全局函数重载+号
Person operator+(Person& p1, Person& p2)
{
	Person tmp;
	tmp.a = p1.a + p2.a;
	tmp.b = p1.b + p2.b;
	return tmp;
}

int main()
{
	Person p1;
	p1.a = 10;
	p1.b = 10;
	Person p2;
	p2.a = 10;
	p2.b = 10;
	// 成员函数重载 和 全局函数重载 要注释掉其一
	Person p3 = p1 + p2;
	cout << p3.a << " " << p3.b << endl;

	system("pause");
	return 0;
}