#include <iostream>
using namespace std;

// C++���������ٸ�һ��������ĸ�����
// 1. Ĭ�Ϲ��캯��
// 2. Ĭ����������
// 3. Ĭ�Ͽ������캯�� (�����Խ���ֵ����)
// 4. ��ֵ����� operator= (�����Խ���ֵ����)

class Person
{
public:
	Person(int age)
	{
		this->age = new int(age);
	}

	~Person()
	{
		if (age != NULL)
		{
			delete age;
			age = NULL;
		}
	}

	// ͬ����, Ϊ��������ʽ����, ����ķ���ֵҲ��Ҫ��һ��Person&
	Person& operator= (Person& p)
	{
		// ���ж������Ƿ��ڶ���, ����ڶ�����Ҫ���ǷŸɾ�, Ȼ�����
		if (age != NULL)
		{
			delete age;
			age = NULL;
		}
		this->age = new int(*p.age);
		return *this;
	}

	int* age;
};

void test()
{
	Person p1 = Person(10);
	Person p2 = Person(20);
	Person p3 = Person(30);
	cout << *p1.age << " " << *p2.age << " " << *p3.age << endl;
	// ��������ظ�ֵ������ͻᱨ��, ��Ϊ�ͷ��ڴ��ʱ��, new int(10)���ظ��ͷ�������
	p3 = p2 = p1;
	cout << *p1.age << " " << *p2.age << " " << *p3.age << endl;
}

int main()
{
	test();

	system("pause");
	return 0;
}