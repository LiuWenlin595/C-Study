#include <iostream>
using namespace std;

int main()
{
	// 选择结构 多行if语句
	int score = 0;
	cout << "请输入分数:" << endl;
	cin >> score;
	cout << "您输入的分数为:" << score << endl;
	if (score > 600) {
		cout << "恭喜您分数大于600" << endl;
	}
	else if (score > 500) {
		cout << "恭喜您分数大于500" << endl;
	}
	else if (score > 400) {
		cout << "恭喜您分数大于400" << endl;
	}
	else {
		cout << "您的分数低于400" << endl;
	}

	system("pause");
	return 0;
}