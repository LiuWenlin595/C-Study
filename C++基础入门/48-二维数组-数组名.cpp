#include <iostream>
using namespace std;

int main()
{
	// 二维数组名用途
	// 1. 查看占用的内存空间大小
	int arr[2][3] = 
	{
		{1, 2, 3},
		{4, 5, 6}
	};
	cout << sizeof(arr) << endl;
	cout << sizeof(arr[0]) << endl;
	cout << sizeof(arr[0][0]) << endl;

	// 2. 查看二维数组的首地址
	cout << arr << endl;
	cout << &arr[0][0] << endl;
	cout << &arr[0][1] << endl;

	system("pause");
	return 0;
}