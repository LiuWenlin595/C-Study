#include <iostream>
using namespace std;

void swap(int num1, int num2) {
	cout << "swap����: " << num1 << " " << num2 << endl;
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
	cout << "swap����: " << num1 << " " << num2 << endl;
}

int main()
{
	int a = 10;
	int b = 20;
	cout << a << " " << b << endl;
	// ֵ���ݵ�ʱ��, �βη����κεĸı�, ����Ӱ��ʵ��
	// ��Ϊʵ�κ��βεĵ�ַ��һ��, ʵ��ֻ�ǰ�ֵ�������β�
	swap(a, b);
	cout << a << " " << b << endl;

	system("pause");
	return 0;
}