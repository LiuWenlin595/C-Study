#include <iostream>
using namespace std;

// ��ָ����ó�Ա����

class Person
{
public:
	void showClassName()
	{
		cout << "Person class" << endl;
	}

	void showPersonAge()
	{
		// �������ָ��Ϊ��, ��������ʲ���age, ����
		cout << "age = " << age << endl;
	}

	int age;
};

int main()
{
	Person* p = NULL;
	p->showClassName();
	//p->showPersonAge(); // ����, ��ָ��û��age����

	system("pause");
	return 0;
}