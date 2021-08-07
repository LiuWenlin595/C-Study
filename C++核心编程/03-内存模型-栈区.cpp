#include <iostream>
using namespace std;

// 程序运行后会生成栈区和堆区
// 栈区: 由编译器自动分配释放, 存放函数的参数值, 局部变量等
// 栈区注意事项 -- 不要返回局部变量的地址
// 栈区的数据由编译器开辟和释放
int* func(int b) // 形参数据也会放在栈区
{
	// 局部变量, 栈区的数据在函数执行完后自动释放	
	int a = 10;
	return &a;
}

int main()
{
	int* p = func(1);
	cout << *p << endl;   // 第一次可以打印正确的数字, 因为编译器做了保留
	// cout << *p << endl;   // 第二次数据不再保留, 报错

	system("pause");
	return 0;
}