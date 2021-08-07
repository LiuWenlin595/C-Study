#include <iostream>
using namespace std;
#include "swap.h"

// 函数的分文件编写
// 1. 创建.h后缀名的头文件
// 2. 创建.cpp后缀名的源文件
// 3. 在头文件中写函数的声明
// 4. 在源文件中写函数的定义
// 5. 源文件中写#include 头文件
// 6. main函数文件写#include 头文件

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	system("pause");
	return 0;
}