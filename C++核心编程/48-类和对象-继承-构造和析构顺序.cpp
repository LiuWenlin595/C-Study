#include <iostream>
using namespace std;

// ���๹�� -> ���๹�� -> �������� -> ��������

class Base
{
public:
	Base()
	{
		cout << "���๹�캯��" << endl;
	}
	~Base()
	{
		cout << "������������" << endl;
	}
};

class Son : public Base
{
public:
	Son()
	{
		cout << "���๹�캯��" << endl;
	}
	~Son()
	{
		cout << "������������" << endl;
	}
};

void test()
{
	Son s = Son();
}

int main()
{
	test();

	system("pause");
	return 0;
}