#include <iostream>
using namespace std;

int main()
{
	// do...while语句
	// 相比于while语句会先执行一遍代码块
	int count = 10;
	do {
		cout << count << endl;
		count++;
	} while (count < 5);

	system("pause");
	return 0;
}