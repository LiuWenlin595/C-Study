#include <iostream>
using namespace std;
#include <string>

class Phone
{
public:
	Phone(string p_name)
	{
		name = p_name;
		cout << "phone ���캯��" << endl;
	}
	~Phone()
	{
		cout << "phone ��������" << endl;
	}

	string name;
};

class Person
{
public:
	// ��ʽת���� Phone phone = phone_name
	Person(string user_name, string phone_name) : name(user_name), phone(phone_name)
	{
		cout << "person ���캯��" << endl;
	}
	~Person()
	{
		cout << "person ��������" << endl;
	}

	string name;
	Phone phone;
};

void test()
{
	// �������������Ϊ�����Ա
	// ����ʱ�ȹ������������, �ٹ�������
	// ����ʱ����������, ���������������
	Person p = Person("person1", "phone1");
	cout << p.name << " " << p.phone.name << endl;
}

int main()
{
	test();

	system("pause");
	return 0;
}