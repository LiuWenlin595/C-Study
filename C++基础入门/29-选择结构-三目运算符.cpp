#include <iostream>
using namespace std;

int main()
{
	// ����: ʵ�ּ򵥵��ж�
	// �﷨: ���ʽ1 ? ���ʽ2 : ���ʽ3

	// ��a��b���Ƚ�,	���������ֵ��ֵ��c
	int a = 10;
	int b = 20;
	int c = 0;

	c = a > b ? a : b;
	cout << c << endl;

	// ��Ŀ��������ص��Ǳ���, ���Լ�����ֵ
	(a > b ? a : b) = 100;
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}