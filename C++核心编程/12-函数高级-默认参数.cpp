#include <iostream>
using namespace std;

// 语法: 返回值类型 函数名 (参数=默认值) {}

// 1. 如果某个形参已经有了默认参数, 则往后的形参都必须有默认参数
int func1(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

// 2.  函数声明和函数实现只能一个有默认参数, 为了避免声明和实现的默认参数不一致
int func2(int a = 10, int b = 20);
int func2(int a = 10, int b = 20)
{
	return a + b;
}

int main()
{
	cout << func1(10) << endl;
	cout << func1(10, 30) << endl;

	 //cout << func2() << endl;  // 报错, 重定义默认参数

	system("pause");
	return 0;
}