#include <iostream>
using namespace std;

int main()
{
	// ����: �����������
	// �﷨: �������� &���� = ԭ��
	int a = 10;
	int& b = a;
	int c = a;  // ��������ֱ�ӵĸ�ֵ����, a��c�ĵ�ַ��ͬ
	cout << a << " " << b << " " << c << endl;
	a = 20;
	cout << a << " " << b << " " << c << endl;

	system("pause");
	return 0;
}