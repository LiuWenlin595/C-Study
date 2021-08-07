#include <iostream>
using namespace std;

// 函数重载的注意事项
// 1. 引用作为函数重载的条件
void func1(int& a)
{
	cout << "有参 int&" << endl;
}

void func1(const int& a)
{
	cout << "有参 const int&" << endl;
}

// 2. 函数重载碰到函数默认参数, 有可能会出现二义性, 一般用了函数重载就不用默认参数
void func2(int a, int b = 10)
{
	cout << "有参 int int" << endl;
}

void func2(int a = 10)
{
	cout << "有参 int" << endl;
}

int main()
{
	int a = 10;
	func1(a);
	// 因为int& a = 10 不合法; const int& a = 10 合法
	// 所以int& 和 const int& 被编译器视为不同的参数类型
	func1(10);

	//func2(10);  // 报错, 默认参数存在二义性

	system("pause");
	return 0;
}