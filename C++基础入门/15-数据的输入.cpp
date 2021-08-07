#include <iostream>
using namespace std;

int main()
{
	// 作用: 从键盘获取数据
	// 关键字: cin
	// 语法: cin >> 变量

	// 以整型为例, 浮点型、字符型、字符串型、布尔类型都一样
	int a = 0;
	cout << "请给a赋值:" << endl;
	cin >> a;
	cout << "a = " << a << endl;

	system("pause");
	return 0;
}