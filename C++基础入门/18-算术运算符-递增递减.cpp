#include <iostream>
using namespace std;

int main()
{
	// 前置递增
	int a = 10;
	++a;
	cout << a << endl;

	// 后置递增
	int b = 10;
	b++;
	cout << b << endl;

	// 前置和后置的区别
	// 前置先进行递增, 再进行表达式运算
	// 后置先进行表达式运算, 再进行递增
	int a2 = 10;
	int a3 = 10;
	cout << ++a2 * 10 << endl;
	cout << a3++ * 10 << endl;

	system("pause");
	return 0;
}