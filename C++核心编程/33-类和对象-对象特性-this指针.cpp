#include <iostream>
using namespace std;

// thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
// thisָ����ָ�볣��, �����޸�ֵ, �������޸�ָ��

class Person
{
public:
	Person(int age)
	{
		// 1. ���βκͳ�Ա����ͬ��ʱ, ����ʹ��thisָ��������
		this->age = age;
	}

	// ��Ҫ���ر���, ��Ҫ�����õķ�ʽ��һ������
	// ����������õĻ�, ����3��ֻ���p2����һ��(��һ��), �������ζ������µĿ��������Ͻ��в���
	// ������������Ϊ�˲��������ռ�
	Person& addAge(Person& p)
	{
		this->age += p.age;
		// 2. ����ķǾ�̬��Ա�����з��ض�����, ��ʹ��return *this
		// this��ָ��p2�����ָ��, *this����p2�Ķ�����
		return *this;
	}

	int age;
};

int main()
{
	Person p1 = Person(10);
	Person p2 = Person(10);
	p2.addAge(p1).addAge(p1).addAge(p1);
	cout << p1.age << " " << p2.age << endl;

	system("pause");
	return 0;
}