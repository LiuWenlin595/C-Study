#include <iostream>
using namespace std;

int main()
{
	// continue��ʹ��ʱ��
	// ����ִ�����ѭ��, ����ִ���´�ѭ��

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				// �����ڴ�ѭ���˳�
				continue;
			}
			cout << j;
		}
		cout << endl;
	}

	system("pause");
	return 0;
}