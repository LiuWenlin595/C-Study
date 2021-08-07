#include <iostream>
using namespace std;

int main()
{
	// 野指针:指针变量指向非法的内存空间
	// 在程序上尽量避免野指针
	int* p = (int*)0x1100;

	// cout << *p << endl;  // 报错

	system("pause");
	return 0;
}