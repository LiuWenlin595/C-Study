#include <iostream>
using namespace std;

int main()
{
	// ����: ��������ת���
	// �÷�: goto ���;
	// ִ�е�goto���ʱ, �����Ǵ���, �ͻ���ת����ǵ�λ��
	// ������ʹ��, ��������̻���

	cout << 1 << endl;
	cout << 2 << endl;
	goto FLAG;
	cout << 3 << endl;
	cout << 4 << endl;
	FLAG:
	cout << 5 << endl;

	system("pause");
	return 0;
}