#include <iostream>
using namespace std;

// 1. new�Ļ����﷨
int* func ()
{
	// �ڶ���������������
	// new���ص��Ǹ��������͵�ָ��
	int* p = new int(10);
	return p;
}

void test1 ()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	// ���ùؼ���delete�ͷŶ���������
	delete p;
	// cout << *p << endl; // ����, �ڴ��Ѿ��ͷ�
}

// 2. �ڶ�������new��������
void test2()
{
	// �ڶ�������10�������ݵ�����
	int* arr = new int[10];
	for (int i = 0; i < 10; i++) {
		// ��10��Ԫ�ظ�ֵ
		arr[i] = i + 100;
	}
	// arr��ʾָ�뵫��arr[i]��ʾ���� (�����)
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl; 
	}
	// �ͷ������ʱ����Ҫ��[]
	delete[] arr;
}

int main()
{
	test1();
	test2();

	system("pause");
	return 0;
}