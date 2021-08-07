#include <iostream>
using namespace std;

// 告诉编译器函数名称如何及如何调用函数, 函数的实际主体可以单独定义
// 声明可以写多次, 但是定义只能有一次
// 在main函数之前定义, 让main函数知道max存在, 否则不声明的话main找不到max会报错
// 声明内容: 返回类类型 函数名 (参数列表)
int max(int a, int b);
int max(int a, int b);
int max(int a, int b);

int main()
{
	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;
	system("pause");
	return 0;
}

int max(int a, int b) {
	return a > b ? a : b;
}