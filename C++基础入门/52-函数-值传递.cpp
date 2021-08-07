#include <iostream>
using namespace std;

void swap(int num1, int num2) {
	cout << "swap函数: " << num1 << " " << num2 << endl;
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
	cout << "swap函数: " << num1 << " " << num2 << endl;
}

int main()
{
	int a = 10;
	int b = 20;
	cout << a << " " << b << endl;
	// 值传递的时候, 形参发生任何的改变, 不会影响实参
	// 因为实参和形参的地址不一样, 实参只是把值传给了形参
	swap(a, b);
	cout << a << " " << b << endl;

	system("pause");
	return 0;
}