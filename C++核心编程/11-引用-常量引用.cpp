#include <iostream>
using namespace std;


void func(const int& ref)
{
	// ref = 100;  // ����, const���ε����ò����޸�
	cout << ref << endl;
}

int main()
{
	// 1. ����const���������� (��������)
	// int& ref = 10;  //����, ���ñ�����һ��Ϸ����ڴ�ռ� 
	const int& ref = 10;  // ͨ��, �������������޸�Ϊint tmp = 10; const int& ref = tmp;
	cout << ref << endl;

	// 2. ����������Ҫ���������β�, ��ֹ�����
	int a = 10;
	func(a);

	system("pause");
	return 0;
}