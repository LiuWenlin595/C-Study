#include <iostream>
using namespace std;
#include <string>

// 全局变量
int g_a = 10;
int g_b = 20;

// const修饰的全局常量
const int c_g_a = 10;

int main()
{
	// 全局区: 存放全局变量、静态变量、字符串常量和全局常量
	// 该区域的数据在程序结束后由操作系统释放
	// 局部变量和局部常量不在全局区中

	// 局部变量
	int a = 10;
	int b = 20;

	// 静态变量
	static int s_a = 10;
	static int s_b = 20;

	// 字符串常量
	string str_a = "haha";

	// const修饰的局部常量
	const int c_a = 10;

	cout << "局部变量: " << (int)&a << endl;
	cout << "局部变量: " << (int)&b << endl;
	cout << "全局变量: " << (int)&g_a << endl;
	cout << "全局变量: " << (int)&g_b << endl;
	cout << "静态变量: " << (int)&s_a << endl;
	cout << "静态变量: " << (int)&s_b << endl;
	cout << "字符串常量: " << (int)&("haha") << endl;
	cout << "全局常量: " << (int)&c_g_a << endl;
	cout << "局部常量: " << (int)&c_a << endl;

	system("pause");
	return 0;
}