#include <iostream>
using namespace std;
#include <string>

class Phone
{
public:
	Phone(string p_name)
	{
		name = p_name;
		cout << "phone 构造函数" << endl;
	}
	~Phone()
	{
		cout << "phone 析构函数" << endl;
	}

	string name;
};

class Person
{
public:
	// 隐式转换法 Phone phone = phone_name
	Person(string user_name, string phone_name) : name(user_name), phone(phone_name)
	{
		cout << "person 构造函数" << endl;
	}
	~Person()
	{
		cout << "person 析构函数" << endl;
	}

	string name;
	Phone phone;
};

void test()
{
	// 当其他类对象作为本类成员
	// 构造时先构造其他类对象, 再构造自身
	// 析构时先析构自身, 再析构其他类对象
	Person p = Person("person1", "phone1");
	cout << p.name << " " << p.phone.name << endl;
}

int main()
{
	test();

	system("pause");
	return 0;
}