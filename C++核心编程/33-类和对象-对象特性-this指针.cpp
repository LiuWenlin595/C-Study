#include <iostream>
using namespace std;

// this指针指向被调用的成员函数所属的对象
// this指针是指针常量, 可以修改值, 不可以修改指向

class Person
{
public:
	Person(int age)
	{
		// 1. 当形参和成员变量同名时, 可以使用this指针来区分
		this->age = age;
	}

	// 想要返回本体, 需要用引用的方式做一个返回
	// 如果不带引用的话, 调用3次只会对p2操作一次(第一次), 后面两次都是在新的拷贝对象上进行操作
	// 参数的引用是为了不申请额外空间
	Person& addAge(Person& p)
	{
		this->age += p.age;
		// 2. 在类的非静态成员函数中返回对象本身, 可使用return *this
		// this是指向p2本体的指针, *this就是p2的对象本体
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