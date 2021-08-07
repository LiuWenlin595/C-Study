#include <iostream>
using namespace std;

int main()
{
	// 作用: 通过指针来保存一个地址, 间接访问内存
	// 定义一个指针, 数据类型 * 指针变量名
	int a = 10;
	int* p;
	p = &a;
	cout << &a << endl;
	cout << p << endl;
	
	// 使用指针
	// 指针前加一个*表示解引用, 找到指针指向的内存中的数据
	cout << a << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}