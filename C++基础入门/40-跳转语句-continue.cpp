#include <iostream>
using namespace std;

int main()
{
	// continue的使用时机
	// 不再执行这次循环, 继续执行下次循环

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				// 本次内存循环退出
				continue;
			}
			cout << j;
		}
		cout << endl;
	}

	system("pause");
	return 0;
}