#include <iostream>
using namespace std;

int main()
{
	// 功能: 求出数据类型占用的内存大小
	// 语法: sizeof(数据类型 / 变量)
	int a = 10;
	cout << sizeof(short) << " " << sizeof(a) << endl;
	system("pause");
	return 0;
}