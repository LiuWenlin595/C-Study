#include <iostream>
using namespace std;

int main()
{
	// break��ʹ��ʱ��
	// 1. ������switch�����
	// 2. ������ѭ������� (for/while)
	// 3. ������Ƕ��ѭ������� 

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j >= 5) {
				// ֻ���˳��ڲ�ѭ��, �����˳����
				break;
			}
			// C++����Ҫ�ϸ����ֵ����ź�˫����
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}