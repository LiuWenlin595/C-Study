#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "�޲ι��캯��" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "�вι��캯��" << endl;
	}
	Person(const Person& p)
	{
		age = p.age;
		cout << "�������캯��" << endl;
	}
	~Person()
	{
		cout << "��������" << endl;
	}

	int age = 0;
};

// ���캯���ĵ��ù���
// 1. ����һ����, C++���������ÿ���඼���������������
// Ĭ�Ϲ��죨��ʵ�֣�
// �вι��� (��ʵ��)
// �������� (ֵ����)
void test1()
{
	// ע�͵���������, p2������ֵ
	Person p1 = Person(10);
	Person p2 = Person(p1);
	cout << p2.age << endl;
}
// 2. ���д���вι��캯��, �������Ͳ����ṩĬ�Ϲ���, ��Ȼ�ṩ��������
void test2()
{
	// ע�͵�Ĭ�Ϲ���Ϳ�������, p1����, p2��p3���ɿ��Գ�ʼ��
	Person p1;
	Person p2 = Person(10);
	Person p3 = Person(p2);
	cout << p2.age << " " << p3.age << endl;
}
// 3. ���д�˿������캯��, �������Ͳ����ṩĬ�Ϲ�����вι���
void test3()
{
	// ע�͵�Ĭ�Ϲ�����вι���, p1��p2������
	Person p1;
	Person p2 = Person(10);
}
int main()
{
	test1();
	test2();
	test3();

	system("pause");
	return 0;
}