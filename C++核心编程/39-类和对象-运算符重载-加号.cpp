#include <iostream>
using namespace std;

// ����: �����е�������������¶���, ��������һ�ֹ���, ����Ӧ��ͬ����������
// �Ӻ��������������: ʵ�������Զ�������������ӵ����� 

class Person
{
public:
	//1. ��Ա��������+��
	Person operator+(Person &p)
	{
		Person tmp;
		tmp.a = this->a + p.a;
		tmp.b = this->b + p.b;
		return tmp;
	}

	int a;
	int b;
};

// 2. ȫ�ֺ�������+��
Person operator+(Person& p1, Person& p2)
{
	Person tmp;
	tmp.a = p1.a + p2.a;
	tmp.b = p1.b + p2.b;
	return tmp;
}

int main()
{
	Person p1;
	p1.a = 10;
	p1.b = 10;
	Person p2;
	p2.a = 10;
	p2.b = 10;
	// ��Ա�������� �� ȫ�ֺ������� Ҫע�͵���һ
	Person p3 = p1 + p2;
	cout << p3.a << " " << p3.b << endl;

	system("pause");
	return 0;
}