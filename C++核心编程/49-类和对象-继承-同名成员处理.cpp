#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		a = 100;
	}
	void func()
	{
		cout << "����ͬ����������" << endl;
	}
	void func(int a)
	{
		cout << "����ͬ���������� " << a << endl;
	}
	int a;
};

class Son : public Base
{
public:
	Son()
	{
		a = 200;
	}
	void func()
	{
		cout << "����ͬ����������" << endl;
	}
	int a;
};

int main()
{
	Son s = Son();
	// ����͸�����Ȼ��Ա����ͬ��, ������Ȼ��������ռ�, ʵ�̳в����ڸ���
	cout << sizeof(s) << endl;

	cout << s.a << endl;
	// ������ø���ͬ������: �������.������::ͬ������
	cout << s.Base::a << endl;

	s.func();
	// ������ø���ͬ������: �������.������::ͬ������
	s.Base::func();

	// ���ص������, ��Ȼ���಻�����вκ���
	// ������������г��ָ���ͬ���ĳ�Ա����, ����ĳ�Ա���������ε����������еĳ�Ա����
	// ��ʱ�������ø�����вκ���, ������Ҫ�������� 
	s.Base::func(100);

	system("pause");
	return 0;
}