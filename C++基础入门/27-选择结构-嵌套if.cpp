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
		if (score > 650) {
			cout << "��ϲ����������650" << endl;
		}
	}
	else {
		cout << "���ķ�������600" << endl;
	}

	system("pause");
	return 0;
}