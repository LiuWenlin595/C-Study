#include <iostream>
using namespace std;

void swap1(int a, int b) {
	cout << "swap1 " << a << " " << b << endl;
	int tmp = a;
	a = b;
	b = tmp;
	cout << "swap1 " << a << " " << b << endl;
}

void swap2(int* a, int* b) {
	cout << "swap2 " << *a << " " << *b << endl;
	int tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "swap2 " << *a << " " << *b << endl;
}

int main()
{
	// 利用指针作为函数参数, 可以修改实参的值
	// 需要修改实参就用地址传递, 不需要就用值传递

	int a = 10;
	int b = 20;
	// 值传递, 不可以修改实参
	cout << a << " " << b << endl;
	swap1(a, b);
	cout << a << " " << b << endl;

	// 地址传递, 可以修改实参
	cout << a << " " << b << endl;
	swap2(&a, &b);
	cout << a << " " << b << endl;

	system("pause");
	return 0;
}