#include <iostream>
using namespace std;

// ����: �������Զ������Ͷ�����бȽϲ���

class Person
{
public:
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	// ���ع�ϵ�����
	// >=, >, <, <=, !=������д, �Ͳ�ʾ����
	bool operator== (Person& p)
	{
		if (this->name == p.name && this->age == p.age)
		{
			return true;
		}
		return false;
	}

	string name;
	int age;
};

int main()
{
	Person p1 = Person("haha", 0);
	Person p2 = Person("haha", 0);
	cout << (p1 == p2) << endl;

	system("pause");
	return 0;
}