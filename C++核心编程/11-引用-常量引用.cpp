#include <iostream>
using namespace std;


void func(const int& ref)
{
	// ref = 100;  // 报错, const修饰的引用不可修改
	cout << ref << endl;
}

int main()
{
	// 1. 加入const可以引常数 (基本不用)
	// int& ref = 10;  //报错, 引用必须引一块合法的内存空间 
	const int& ref = 10;  // 通过, 编译器将代码修改为int tmp = 10; const int& ref = tmp;
	cout << ref << endl;

	// 2. 常量引用主要用来修饰形参, 防止误操作
	int a = 10;
	func(a);

	system("pause");
	return 0;
}