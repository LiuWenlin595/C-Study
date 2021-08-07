#include <iostream>
using namespace std;

void swap1(int a, int b) {
	cout << "swap1 " << a << " " << b << endl;
	int tmp = a;
	a = b;
	b = tmp;
	cout << "swap1 " << a << " " << b << endl;
}

void swap2(int* a, int* b) {
	cout << "swap2 " << *a << " " << *b << endl;
	int tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "swap2 " << *a << " " << *b << endl;
}

int main()
{
	// ����ָ����Ϊ��������, �����޸�ʵ�ε�ֵ
	// ��Ҫ�޸�ʵ�ξ��õ�ַ����, ����Ҫ����ֵ����

	int a = 10;
	int b = 20;
	// ֵ����, �������޸�ʵ��
	cout << a << " " << b << endl;
	swap1(a, b);
	cout << a << " " << b << endl;

	// ��ַ����, �����޸�ʵ��
	cout << a << " " << b << endl;
	swap2(&a, &b);
	cout << a << " " << b << endl;

	system("pause");
	return 0;
}