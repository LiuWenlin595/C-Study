#include <iostream>
using namespace std;

int main()
{
	// 特点: 放在一块连续的内存空间中; 数组中每个元素都是相同的数据类型
	// 定义一: 数据类型 数组名[数组长度];
	// 定义数组必须给定一个初始长度
	int arr1[5];
	arr1[0] = 0;
	arr1[1] = 1;
	arr1[2] = 2;
	arr1[3] = 3;
	arr1[4] = 4;
	for (int i = 0; i < 5; i++) {
		cout << arr1[i] << endl;
	}
	// 定义二: 数据类型 数组名[数组长度] = {值1, 值2, ...};
	// 如果值没有补齐, 数组会用0进行填充
	int arr2[5] = {0, 1, 2};
	for (int i = 0; i < 5; i++) {
		cout << arr2[i] << endl;
	}
	// 定义三: 数据类型 数组名[] = {值1, 值2, ...};
	// 此时数组长度为3
	int arr3[] = {0, 1, 2};
	for (int i = 0; i < 3; i++) {
		cout << arr3[i] << endl;
	}

	system("pause");
	return 0;
}