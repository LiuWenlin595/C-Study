#include <iostream>
using namespace std;

int main()
{
	// ǰ�õ���
	int a = 10;
	++a;
	cout << a << endl;

	// ���õ���
	int b = 10;
	b++;
	cout << b << endl;

	// ǰ�úͺ��õ�����
	// ǰ���Ƚ��е���, �ٽ��б��ʽ����
	// �����Ƚ��б��ʽ����, �ٽ��е���
	int a2 = 10;
	int a3 = 10;
	cout << ++a2 * 10 << endl;
	cout << a3++ * 10 << endl;

	system("pause");
	return 0;
}