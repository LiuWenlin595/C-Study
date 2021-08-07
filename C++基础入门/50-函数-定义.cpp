#include <iostream>
using namespace std;

// 作用: 将一段经常使用的代码封装起来, 减少重复代码
// 语法: 返回值类型 函数名 (参数列表) {函数体语句; return表达式;} 
int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

int main()
{

	system("pause");
	return 0;
}