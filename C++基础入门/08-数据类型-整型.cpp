#include <iostream>
using namespace std;

//数据类型: 给变量分配合适的内存空间

int main()
{
	// 整型
	// 1. 短整型 short (-32768 ~ 32767)
	// 2. 整型 int
	// 3. 长整型 long
	// 4. 长长整型 long long
	short a = 32768;  // 越界, 输出-32768
	int b = 32768;  // 32768
	cout << a << " " << b << endl;
	system("pause");
	return 0;
}