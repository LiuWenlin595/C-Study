#include <iostream>
using namespace std;

// �﷨: class ����: �̳з�ʽ ����1, �̳з�ʽ ����2, ...

class Base1
{
public:
	Base1()
	{
		a = 100;
		same = 1000;
	}

	int a;
	int same;
};

class Base2
{
public:
	Base2()
	{
		b = 200;
		same = 2000;
	}

	int b;
	int same;
};

class Son : public Base1, public Base2
{
public:
	Son()
	{
		c = 300;
		d = 400;
	}

	int c;
	int d;
};

int main()
{
	Son s = Son();
	cout << sizeof(s) << endl;
	cout << s.a << " " << s.b << " " << s.c << " " << s.d << endl;
	// �������г���ͬ����Ա, ��Ҫ������������
	cout << s.Base1::same << " " << s.Base2::same << endl;

	// Ҳ���Բ��� 47-�̳��еĶ���ģ�� �еĿ��ӻ��������鿴�����Ա�ֲ�

	system("pause");
	return 0;
}