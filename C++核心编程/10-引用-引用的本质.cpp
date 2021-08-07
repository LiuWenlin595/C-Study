#include <iostream>
using namespace std;

void func(int& ref)
{
	// ref是引用, 转换为*ref = 100
	ref = 100;
}

int main()
{
	// 本质: 引用的本质在C++内部实现是一个指针常量
	int a = 10;
	// 自动转换为int* const ref = &a
	// 指针常量是指针指向不可改, 也说明了为什么引用不可更改
	int& ref = a;
	cout << a << " " << ref << endl;
	// 内部发现ref是引用, 自动帮我们转成*ref = 20
	ref = 20;
	cout << a << " " << ref << endl;
	
	func(a);
	cout << a << " " << ref << endl;

	system("pause");
	return 0;
}