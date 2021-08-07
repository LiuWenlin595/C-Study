#include <iostream>
using namespace std;

int main()
{
	// 创建布尔类型 true/false, 本质上就是1/0, 非0的值都代表为真
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;

	// bool类型所占内存空间为1
	cout << sizeof(bool) << endl;

	system("pause");
	return 0;
}