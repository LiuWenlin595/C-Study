#include <iostream>
using namespace std;

int main()
{
	// ����: ͨ��ָ��������һ����ַ, ��ӷ����ڴ�
	// ����һ��ָ��, �������� * ָ�������
	int a = 10;
	int* p;
	p = &a;
	cout << &a << endl;
	cout << p << endl;
	
	// ʹ��ָ��
	// ָ��ǰ��һ��*��ʾ������, �ҵ�ָ��ָ����ڴ��е�����
	cout << a << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}