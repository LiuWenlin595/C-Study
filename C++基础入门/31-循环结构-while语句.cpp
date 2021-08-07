#include <iostream>
using namespace std;

int main()
{
	// while语句
	// 在屏幕中打印 0~9
	int count = 0;
	// while (1) {} 表示死循环
	while (count < 10) {
		cout << count << endl;
		count++;
	}

	system("pause");
	return 0;
}