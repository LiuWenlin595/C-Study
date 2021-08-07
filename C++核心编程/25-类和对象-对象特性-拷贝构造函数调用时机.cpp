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

// �������캯������ʱ��

// 1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���µĶ���
void test1()
{
	cout << "test1" << endl;
	Person p1 = Person(10);
	Person p2 = Person(p1);
	cout << p1.age << " " << p2.age << endl;
}
// 2. ֵ���ݵķ�ʽ������������ֵ
void doWork1(Person p)
{
	cout << p.age << endl;
	cout << &p << endl;
}
void test2()
{
	cout << "test2" << endl;
	Person p = Person(20);
	cout << &p << endl;
	doWork1(p);   // ���ÿ������캯��, �����β�
}

// 3. ֵ��ʽ���ؾֲ�����
Person doWork2()
{
	Person p = Person(30);
	cout << &p << endl;
	return p;
}
void test3()
{
	cout << "test3" << endl;
	Person p = doWork2();  // ���ÿ������캯��
	cout << &p << endl;
	cout << p.age << endl;
}

int main()
{
	test1();
	test2();
	test3();

	system("pause");
	return 0;
}