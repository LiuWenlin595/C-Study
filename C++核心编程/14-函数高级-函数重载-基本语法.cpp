#include <iostream>
using namespace std;

// 作用: 函数名可以相同, 提高复用性
// 满足条件: 同一个作用域下; 函数名称相同; 函数参数类型不同或者个数不同或者顺序不同
// 注意: 函数的返回值不可以作为函数重载的条件
void func()
{
	cout << "无参" << endl;
}

void func(int a)
{
	cout << "有参 int" << endl;
}

//// 报错, int 和 const int 属于相同的函数参数类型
//// 因为 int a = 5 和 const int a = 5 都是可行的语法
//void func(const int a)
//{
//	cout << "有参 const int" << endl;
//}

void func(double b)
{
	cout << "有参 double" << endl;
}

void func(int a, double b)
{
	cout << "有参 int double" << endl;
}

void func(double a, int b)
{
	cout << "有参 double int" << endl;
}

//// 报错, 只有返回值不同, 编译器无法确定应该进入哪个函数
//int func(double a, int b)
//{
//	cout << " " << endl;
//}

int main()
{
	func();
	func(10);
	func(10.0);
	func(10, 10.0);
	func(10.0, 10);

	system("pause");
	return 0;
}