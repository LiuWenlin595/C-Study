#include <iostream>
using namespace std;

int main()
{
	// ѡ��ṹ ����if���
	int score = 0;
	cout << "���������:" << endl;
	cin >> score;
	cout << "������ķ���Ϊ:" << score << endl;
	if (score > 600) {
		cout << "��ϲ����������600" << endl;
	}
	else if (score > 500) {
		cout << "��ϲ����������500" << endl;
	}
	else if (score > 400) {
		cout << "��ϲ����������400" << endl;
	}
	else {
		cout << "���ķ�������400" << endl;
	}

	system("pause");
	return 0;
}