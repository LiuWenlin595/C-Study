#include <iostream>
using namespace std;

// 1. ֵ����
void swap1(int a, int b) {
	cout << "swap1 " << a << " " << b << endl;
	int tmp = a;
	a = b;
	b = tmp;
	cout << "swap1 " << a << " " << b << endl;
}

// 2. ��ַ����
void swap2(int* a, int* b) {
	cout << "swap2 " << *a << " " << *b << endl;
	int tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "swap2 " << *a << " " << *b << endl;
}

// 3. ���ô���
// ����: ��������ʱ, �����������õļ������β�����ʵ��; ��Ϊ�β���һ������, ��ʵ�ε�һ������ (�β�ʵ�ε�ַ��ͬ)
// �ŵ�: ���Լ�ָ���޸�ʵ��(�����ַ����)
void swap3(int& a, int& b) {
	cout << "swap3 " << a << " " << b << endl;
	int tmp = a;
	a = b;
	b = tmp;
	cout << "swap3 " << a << " " << b << endl;
}

int main()
{
	int a = 10;
	int b = 20;
	cout << a << " " << b << endl;
	swap3(a, b);
	cout << a << " " << b << endl;

	system("pause");
	return 0;
}