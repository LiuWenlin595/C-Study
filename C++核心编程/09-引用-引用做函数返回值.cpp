#include <iostream>
using namespace std;


// 作用: 引用是可以作为函数的返回值存在的
int& test1()
{
	int a = 10;
	return a;
}

int& test2()
{ 
	// 静态变量, 存放在全局区, 在程序结束后系统释放
	static int a = 10;
	return a;
}

int main()
{
	// 不要返回局部变量的引用
	int& b = test1();
	cout << b << endl;  // 和栈区一样, 局部变量第一次编译器做了保留
	// cout << b << endl;  // 报错, 第二次内存释放

	// 可以返回全局变量的引用
	int& c = test2();
	cout << c << endl;
	cout << c << endl;

	// 如果函数的返回值为引用, 这个函数调用可以作为左值
	// (不太懂, c是a的别名是肯定的, 但是每次调用函数定义的static int a难道都存在一个固定的地址？)
	test2() = 1000;
	cout << c << endl;
	cout << c << endl;

	system("pause");
	return 0;
}