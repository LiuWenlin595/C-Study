#include <iostream>
using namespace std;

// 空指针调用成员函数

class Person
{
public:
	void showClassName()
	{
		cout << "Person class" << endl;
	}

	void showPersonAge()
	{
		// 如果传入指针为空, 则根本访问不到age, 报错
		cout << "age = " << age << endl;
	}

	int age;
};

int main()
{
	Person* p = NULL;
	p->showClassName();
	//p->showPersonAge(); // 报错, 空指针没有age属性

	system("pause");
	return 0;
}