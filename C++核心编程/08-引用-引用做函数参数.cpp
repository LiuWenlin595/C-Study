#include <iostream>
using namespace std;

// 1. 值传递
void swap1(int a, int b) {
	cout << "swap1 " << a << " " << b << endl;
	int tmp = a;
	a = b;
	b = tmp;
	cout << "swap1 " << a << " " << b << endl;
}

// 2. 地址传递
void swap2(int* a, int* b) {
	cout << "swap2 " << *a << " " << *b << endl;
	int tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "swap2 " << *a << " " << *b << endl;
}

// 3. 引用传递
// 作用: 函数传参时, 可以利用引用的技术让形参修饰实参; 因为形参是一个引用, 即实参的一个别名 (形参实参地址相同)
// 优点: 可以简化指针修改实参(代替地址传递)
void swap3(int& a, int& b) {
	cout << "swap3 " << a << " " << b << endl;
	int tmp = a;
	a = b;
	b = tmp;
	cout << "swap3 " << a << " " << b << endl;
}

int main()
{
	int a = 10;
	int b = 20;
	cout << a << " " << b << endl;
	swap3(a, b);
	cout << a << " " << b << endl;

	system("pause");
	return 0;
}