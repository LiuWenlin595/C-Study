#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	// 1. 引用必须初始化
	// int &b;  // 报错
	int& b = a;

	// 2. 引用在初始化后, 不可以改变
	int c = 20;

	// &b = c;  // 报错, 引用不可修改
	cout << a << " " << b << " " << c << endl;
	b = c;  // 这是赋值操作, 而不是更改引用
	cout << a << " " << b << " " << c << endl;

	system("pause");
	return 0;
}