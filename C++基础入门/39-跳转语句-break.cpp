#include <iostream>
using namespace std;

int main()
{
	// break的使用时机
	// 1. 出现在switch语句中
	// 2. 出现在循环语句中 (for/while)
	// 3. 出现在嵌套循环语句中 

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j >= 5) {
				// 只会退出内层循环, 不会退出外层
				break;
			}
			// C++中需要严格区分单引号和双引号
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}