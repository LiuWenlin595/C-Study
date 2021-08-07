#include <iostream>
using namespace std;

/*
常量的定义方式
1. #define 宏常量:  #define 常量名 常量值
2. const修饰的常量:  const 变量类型 变量名 = 变量值
*/

#define Day 7

int main()
{
	//Day = 14;  //报错

	const int month = 12;
	//month = 24;  //报错

	cout << Day << " " << month << endl;

	system("pause");
	return 0;
}