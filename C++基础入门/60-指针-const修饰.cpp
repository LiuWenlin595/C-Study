#include <iostream>
using namespace std;

int main()
{
	// 记录的技巧: const指向*, *p就不可以修改; const指向p, p就不可以修改
	int a = 10;
	int b = 20;
	// const修饰指针-常量指针
	// 指针的指向可以修改, 指针指向的值不可以改
	const int* p1 = &a;
	// *p1 = 20;  // 报错
	p1 = &b;
	
	// const修饰常量-指针常量
	// 指针的指向不可以修改, 指针指向的值可以修改
	int* const p2 = &a;
	*p2 = 20;
	// p2 = &b;  // 报错
	
	// const既修饰指针也修饰常量
	// 指针的指向和指针的值都不可以修改
	const int* const p3 = &a;
	// *p3 = 20;  // 报错
	// p3 = &b;   // 报错
	
	system("pause");
	return 0;
}