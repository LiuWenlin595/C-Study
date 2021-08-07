#include <iostream>
using namespace std;

int main()
{
	// 作用: 实现简单的判断
	// 语法: 表达式1 ? 表达式2 : 表达式3

	// 将a和b作比较,	将变量大的值赋值给c
	int a = 10;
	int b = 20;
	int c = 0;

	c = a > b ? a : b;
	cout << c << endl;

	// 三目运算符返回的是变量, 可以继续赋值
	(a > b ? a : b) = 100;
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}