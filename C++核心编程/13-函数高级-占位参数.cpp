#include <iostream>
using namespace std;

// 语法: 返回值类型 函数名 (数据类型) {}

// 目前占位参数只知道定义, 后续会讲怎么使用
// 占位参数也可以有默认值
int func(int a, int = 10)
{
	return a;
}

int main()
{
	cout << func(10, 20) << endl;

	system("pause");
	return 0;
}	