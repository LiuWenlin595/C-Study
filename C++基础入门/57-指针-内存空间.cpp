#include <iostream>
using namespace std;

int main()
{
	// 在32位操作系统下(x86), 所有指针都占4个字节的内存空间
	// 64位操作系统下(x64),指针占8个字节
	int a = 10;
	int* p = &a;
	cout << sizeof(int*) << endl;
	cout << sizeof(double*) << endl;
	cout << sizeof(p) << endl;

	system("pause");
	return 0;
}