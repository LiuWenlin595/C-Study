#include <iostream>
using namespace std;

int main()
{
	// 作用: 给变量起别名
	// 语法: 数据类型 &别名 = 原名
	int a = 10;
	int& b = a;
	int c = a;  // 这样就是直接的赋值操作, a和c的地址不同
	cout << a << " " << b << " " << c << endl;
	a = 20;
	cout << a << " " << b << " " << c << endl;

	system("pause");
	return 0;
}