#include <iostream>
using namespace std;

int main()
{
	// ��32λ����ϵͳ��(x86), ����ָ�붼ռ4���ֽڵ��ڴ�ռ�
	// 64λ����ϵͳ��(x64),ָ��ռ8���ֽ�
	int a = 10;
	int* p = &a;
	cout << sizeof(int*) << endl;
	cout << sizeof(double*) << endl;
	cout << sizeof(p) << endl;

	system("pause");
	return 0;
}