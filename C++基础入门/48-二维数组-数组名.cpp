#include <iostream>
using namespace std;

int main()
{
	// ��ά��������;
	// 1. �鿴ռ�õ��ڴ�ռ��С
	int arr[2][3] = 
	{
		{1, 2, 3},
		{4, 5, 6}
	};
	cout << sizeof(arr) << endl;
	cout << sizeof(arr[0]) << endl;
	cout << sizeof(arr[0][0]) << endl;

	// 2. �鿴��ά������׵�ַ
	cout << arr << endl;
	cout << &arr[0][0] << endl;
	cout << &arr[0][1] << endl;

	system("pause");
	return 0;
}