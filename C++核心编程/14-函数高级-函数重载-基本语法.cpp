#include <iostream>
using namespace std;

// ����: ������������ͬ, ��߸�����
// ��������: ͬһ����������; ����������ͬ; �����������Ͳ�ͬ���߸�����ͬ����˳��ͬ
// ע��: �����ķ���ֵ��������Ϊ�������ص�����
void func()
{
	cout << "�޲�" << endl;
}

void func(int a)
{
	cout << "�в� int" << endl;
}

//// ����, int �� const int ������ͬ�ĺ�����������
//// ��Ϊ int a = 5 �� const int a = 5 ���ǿ��е��﷨
//void func(const int a)
//{
//	cout << "�в� const int" << endl;
//}

void func(double b)
{
	cout << "�в� double" << endl;
}

void func(int a, double b)
{
	cout << "�в� int double" << endl;
}

void func(double a, int b)
{
	cout << "�в� double int" << endl;
}

//// ����, ֻ�з���ֵ��ͬ, �������޷�ȷ��Ӧ�ý����ĸ�����
//int func(double a, int b)
//{
//	cout << " " << endl;
//}

int main()
{
	func();
	func(10);
	func(10.0);
	func(10, 10.0);
	func(10.0, 10);

	system("pause");
	return 0;
}