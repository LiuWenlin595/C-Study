#include <iostream>
using namespace std;

// ���麯���﷨: virtual ����ֵ���� ������ (�����б�) = 0;
// ������: ���д��麯������
// �������ص�: �޷�ʵ��������; ���������д�������еĴ��麯��, ��������Ҳ�ǳ�����

class Base
{
public:
	virtual void func() = 0;
};

class Son : public Base
{
public:
	virtual void func() 
	{
		cout << "����func" << endl;
	};
};

int main()
{
	// Base b = Base();  // �����಻�ܹ���ʵ��
	Son s1 = Son();
	s1.func();

 // ����Ϊ�����ָ�� ָ������Ķ���
	Base* s2 = new Son();
	s2->func();
 delete s2;

	system("pause");
	return 0;
}