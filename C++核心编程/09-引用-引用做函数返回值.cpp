#include <iostream>
using namespace std;


// ����: �����ǿ�����Ϊ�����ķ���ֵ���ڵ�
int& test1()
{
	int a = 10;
	return a;
}

int& test2()
{ 
	// ��̬����, �����ȫ����, �ڳ��������ϵͳ�ͷ�
	static int a = 10;
	return a;
}

int main()
{
	// ��Ҫ���ؾֲ�����������
	int& b = test1();
	cout << b << endl;  // ��ջ��һ��, �ֲ�������һ�α��������˱���
	// cout << b << endl;  // ����, �ڶ����ڴ��ͷ�

	// ���Է���ȫ�ֱ���������
	int& c = test2();
	cout << c << endl;
	cout << c << endl;

	// ��������ķ���ֵΪ����, ����������ÿ�����Ϊ��ֵ
	// (��̫��, c��a�ı����ǿ϶���, ����ÿ�ε��ú��������static int a�ѵ�������һ���̶��ĵ�ַ��)
	test2() = 1000;
	cout << c << endl;
	cout << c << endl;

	system("pause");
	return 0;
}