#include <iostream>
using namespace std;

// ������
// �������޸ĳ�Ա����
// ��Ա��������ʱ�ӹؼ���mutable��, �ڳ���������Ȼ�����޸�
// ������ֻ�ܵ��ó�����

class Person
{
public:
	// �ڳ�Ա���������const, ���ε���this, ��ָ��ָ���ֵҲ�������޸�
	// Person* const this -> const Person* const this
	void showPerson() const
	{
		// a = 100;  // ����, ָ���ֵ�������޸�
		b = 100;
	}

	void func() {}

	int a;
	// ����mutable����, �������, ��ʹ�ڳ�������Ҳ�����޸����ֵ
	mutable int b;
};

int main()
{
	// �ڶ���ǰ��const, ��Ϊ������
	const Person p;
	// p.a = 100;  // ����, �����󲻿��޸���ͨ����
	p.b = 100;     // ����������޸��������
	p.showPerson();  // ������ֻ�ܵ��ó�����
	// p.func();     // ����, �������ܵ�����ͨ����, ��Ϊ��ͨ�����п����޸���ͨ����

	system("pause");
	return 0;
}