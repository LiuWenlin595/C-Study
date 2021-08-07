#include <iostream>
using namespace std;

int main()
{
	// 选择结构 单行if语句
	int score = 0;
	cout << "请输入分数:" << endl;
	cin >> score;
	cout << "您输入的分数为:" << score << endl;
	if (score > 600)   //; 这里不能加分号, 加上分号后相当于if执行了一个空命令, 条件白写
	{
		cout << "恭喜您分数大于600" << endl;
	}

	system("pause");
	return 0;
}