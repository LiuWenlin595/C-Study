#include <iostream>
using namespace std;

// �����������������: ����Զ�����������

class Person
{
public:
	// 1. ��Ա��������<<
	// p.opeartor<< (cout) === p << cout  
	// �������ó�Ա��������<<�����, ��Ϊ�޷�ʵ��cout�����
	/*Person operator<<(Person &p)
	{

	}*/

	int a;
	int b;
};

// 2. ֻ��ʹ��ȫ�ֺ�������<<
// opeartor<< (cout, p) === cout << p
// ostreamȫ��ֻ����һ��, ������Ҫ������
ostream& operator<<(ostream& cout, Person& p)
{
	cout << p.a << " " << p.b;
	return cout;
}

int main()
{
	Person p1;
	p1.a = 10;
	p1.b = 10;
	// ������ʽ����, ���cout << p ����void, ������޷��ټ� << endl
	// ������operator<< ��������ostream&, Ȼ�����ִ�� new_cout << endl;
	cout << p1 << endl;

	system("pause");
	return 0;
}