#include <iostream>
using namespace std;

// �������ص�ע������
// 1. ������Ϊ�������ص�����
void func1(int& a)
{
	cout << "�в� int&" << endl;
}

void func1(const int& a)
{
	cout << "�в� const int&" << endl;
}

// 2. ����������������Ĭ�ϲ���, �п��ܻ���ֶ�����, һ�����˺������ؾͲ���Ĭ�ϲ���
void func2(int a, int b = 10)
{
	cout << "�в� int int" << endl;
}

void func2(int a = 10)
{
	cout << "�в� int" << endl;
}

int main()
{
	int a = 10;
	func1(a);
	// ��Ϊint& a = 10 ���Ϸ�; const int& a = 10 �Ϸ�
	// ����int& �� const int& ����������Ϊ��ͬ�Ĳ�������
	func1(10);

	//func2(10);  // ����, Ĭ�ϲ������ڶ�����

	system("pause");
	return 0;
}