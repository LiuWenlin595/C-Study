#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	// 1. ���ñ����ʼ��
	// int &b;  // ����
	int& b = a;

	// 2. �����ڳ�ʼ����, �����Ըı�
	int c = 20;

	// &b = c;  // ����, ���ò����޸�
	cout << a << " " << b << " " << c << endl;
	b = c;  // ���Ǹ�ֵ����, �����Ǹ�������
	cout << a << " " << b << " " << c << endl;

	system("pause");
	return 0;
}