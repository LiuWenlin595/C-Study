#include <iostream>
using namespace std;

// �﷨: ����ֵ���� ������ (����=Ĭ��ֵ) {}

// 1. ���ĳ���β��Ѿ�����Ĭ�ϲ���, ��������βζ�������Ĭ�ϲ���
int func1(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

// 2.  ���������ͺ���ʵ��ֻ��һ����Ĭ�ϲ���, Ϊ�˱���������ʵ�ֵ�Ĭ�ϲ�����һ��
int func2(int a = 10, int b = 20);
int func2(int a = 10, int b = 20)
{
	return a + b;
}

int main()
{
	cout << func1(10) << endl;
	cout << func1(10, 30) << endl;

	 //cout << func2() << endl;  // ����, �ض���Ĭ�ϲ���

	system("pause");
	return 0;
}