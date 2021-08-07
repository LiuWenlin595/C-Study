#include <iostream>
using namespace std;
#include <string>

class Person
{
public:
	// ������ �� �βε����� ��������ͬ (python����)
	void set_name(string n)
	{
		name = n;
	}

	void set_age(int a)
	{
		if (a < 0 || a > 150)
		{
			cout << "���䲻��, ������Ϊ0" << endl;
			age = 0;
		}
		else {
			age = a;
		}
	}

	string get_name()
	{
		return name;
	}

	int get_age()
	{
		return age;
	}

	void set_lover(string lover)
	{
		lover = lover;
	}	

private:
	// ���� �ɶ���д
	string name;
	// ���� �ɶ���д
	int age;
	// ���� ֻд
	string lover;
};

int main()
{
	// ��Ա����˽�л�
	// �ŵ�1: �����г�Ա��������Ϊ˽��, �����Լ����ƶ�дȨ��
	// �ŵ�2: ����дȨ��, ���ǿ��Լ�����ݵ���Ч��
	Person p;
	p.set_name("p1");
	cout << p.get_name() << endl;
	p.set_age(500);
	cout << p.get_age() << endl;
	p.set_age(18);
	cout << p.get_age() << endl;

	p.set_lover("haha");
	// cout << p.lover << endl;  // ����, û�пɶ��ķ���

	system("pause");
	return 0;
}