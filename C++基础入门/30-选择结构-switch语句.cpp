#include <iostream>
using namespace std;
#include <string>

int main()
{
	// switch���
	int score = 0;
	cout << "�����Ӱ���д��:" << endl;
	cin >> score;
	cout << "���Ĵ��Ϊ: " << score << endl;

	// ��Ҫ����break�˳���ǰ��֧
	// ֻ���ж����ͺ��ַ���, ��������һ������, Ҳ���ܶ��ַ������д���
	// �ṹ����, ִ��Ч�ʸ�
	switch (score)
	{
	case 10:
		cout << "�õ�Ӱ�÷�Ϊ10" << endl;
		break;
	case 9:
		cout << "�õ�Ӱ�÷�Ϊ9" << endl;
		break;
	case 8:
		cout << "�õ�Ӱ�÷�Ϊ8" << endl;
		break;
	default:
		cout << "�����Ӱ��̫��" << endl;
		break;
	}

	system("pause");
	return 0;
}