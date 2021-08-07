#include <iostream>
using namespace std;

// 成员变量 和 成员函数 分开存储的
class Person1
{

};
class Person2
{
	// 非静态成员变量
	int a;
};
class Person3
{
	// 静态成员变量, 不属于类对象的存储空间
	static int a;
};
class Person4
{
	// 非静态成员函数, 不属于类对象的存储空间
	void func() {}
};
class Person5
{
	// 静态成员函数, 不属于类对象的存储空间
	static void func() {}
};

int main()
{
	Person1 p1;
	// 空对象占用内存空间为1
	// C++编译器会给每个空对象也分配一个内存空间, 是为了区分空对象占内存的位置
	// 每个空对象也应该有一个独一无二的内存地址
	cout << sizeof(p1) << endl;
	
	Person2 p2;
	cout << sizeof(p2) << endl;

	Person3 p3;
	cout << sizeof(p3) << endl;

	Person4 p4;
	cout << sizeof(p4) << endl;

	Person4 p5;
	cout << sizeof(p5) << endl;

	system("pause");
	return 0;
}