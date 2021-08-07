#include <iostream>
using namespace std;

int main()
{
	// 作用: 满足循环条件, 执行循环语句
	// 语法: for (起始表达式; 条件表达式; 末尾循环体) { 循环语句; }

	// 打印数组0~9
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}

	// cout << i << endl;  // 报错, for循环定义的变量只在循环体中生效

	int i = 0;
	for (; ; ) {
		if (i >= 10) {
			break;
		}
		cout << i << endl;
		i++;
	}

	system("pause");
	return 0;
}