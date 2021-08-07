#include <iostream>
using namespace std;
#include <string>

int main()
{
	// switch语句
	int score = 0;
	cout << "请给电影进行打分:" << endl;
	cin >> score;
	cout << "您的打分为: " << score << endl;

	// 需要采用break退出当前分支
	// 只能判断整型和字符型, 不可以是一个区间, 也不能对字符串进行处理
	// 结构清晰, 执行效率高
	switch (score)
	{
	case 10:
		cout << "该电影得分为10" << endl;
		break;
	case 9:
		cout << "该电影得分为9" << endl;
		break;
	case 8:
		cout << "该电影得分为8" << endl;
		break;
	default:
		cout << "这个电影不太行" << endl;
		break;
	}

	system("pause");
	return 0;
}