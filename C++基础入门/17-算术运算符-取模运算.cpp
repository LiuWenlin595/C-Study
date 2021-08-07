#include <iostream>
using namespace std;

int main()
{
	// 取模运算符 %
	// 取模运算除数不能为0
	// 只有整数能做取模运算
	int a = 10;
	int b = 3;
	float c = 5.5;
	cout << a % b << endl;
	//cout << c % b << endl;  //报错

	system("pause");
	return 0;
}