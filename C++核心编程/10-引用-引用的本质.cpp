#include <iostream>
using namespace std;

void func(int& ref)
{
	// ref������, ת��Ϊ*ref = 100
	ref = 100;
}

int main()
{
	// ����: ���õı�����C++�ڲ�ʵ����һ��ָ�볣��
	int a = 10;
	// �Զ�ת��Ϊint* const ref = &a
	// ָ�볣����ָ��ָ�򲻿ɸ�, Ҳ˵����Ϊʲô���ò��ɸ���
	int& ref = a;
	cout << a << " " << ref << endl;
	// �ڲ�����ref������, �Զ�������ת��*ref = 20
	ref = 20;
	cout << a << " " << ref << endl;
	
	func(a);
	cout << a << " " << ref << endl;

	system("pause");
	return 0;
}