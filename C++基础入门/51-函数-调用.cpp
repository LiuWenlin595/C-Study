#include <iostream>
using namespace std;

// ����������Ĳ��������β�
// ��������ʱ,ʵ�ε�ֵ�ᴫ�ݸ��β�
int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

int main()
{
	// ����: ʹ�ö���õĺ���
	// �﷨: ������(����)
	int a = 10;
	int b = 20;
	// ʵ�ʵ��ô��ݵ�ֵ��ʵ��
	int c = add(a, b);
	cout << c << endl;

	system("pause");
	return 0;
}