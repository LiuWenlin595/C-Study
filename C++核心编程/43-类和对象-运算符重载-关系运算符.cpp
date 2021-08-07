#include <iostream>
using namespace std;

// 作用: 让两个自定义类型对象进行比较操作

class Person
{
public:
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	// 重载关系运算符
	// >=, >, <, <=, !=都可以写, 就不示范了
	bool operator== (Person& p)
	{
		if (this->name == p.name && this->age == p.age)
		{
			return true;
		}
		return false;
	}

	string name;
	int age;
};

int main()
{
	Person p1 = Person("haha", 0);
	Person p2 = Person("haha", 0);
	cout << (p1 == p2) << endl;

	system("pause");
	return 0;
}