#include <iostream>
using namespace std;

int main()
{
	// ����: ����ѭ������, ִ��ѭ�����
	// �﷨: for (��ʼ���ʽ; �������ʽ; ĩβѭ����) { ѭ�����; }

	// ��ӡ����0~9
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}

	// cout << i << endl;  // ����, forѭ������ı���ֻ��ѭ��������Ч

	int i = 0;
	for (; ; ) {
		if (i >= 10) {
			break;
		}
		cout << i << endl;
		i++;
	}

	system("pause");
	return 0;
}