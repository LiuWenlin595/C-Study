#include <iostream>
using namespace std;

// ����: C++�ṩ�˳�ʼ���б��﷨, ������ʼ������
// �﷨: ���캯��(): ����1(ֵ1), ����2(ֵ2), ... {}

class Person
{
public:
	Person(int a, int b, int c): p_a(a), p_b(b), p_c(c)
	{

	}

	void print()
	{
		cout << p_a << " " << p_b << " " << p_c << endl;
	}

	int p_a;
	int p_b;
	int p_c;
};

int main()
{
	Person p = Person(10, 20, 30);
	p.print();

	system("pause");
	return 0;
}