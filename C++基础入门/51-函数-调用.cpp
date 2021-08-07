#include <iostream>
using namespace std;

// 函数定义里的参数叫做形参
// 函数调用时,实参的值会传递给形参
int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

int main()
{
	// 功能: 使用定义好的函数
	// 语法: 函数名(参数)
	int a = 10;
	int b = 20;
	// 实际调用传递的值叫实参
	int c = add(a, b);
	cout << c << endl;

	system("pause");
	return 0;
}