#include <iostream>
using namespace std;

// 常函数
// 不可以修改成员属性
// 成员属性声明时加关键字mutable后, 在常函数中依然可以修改
// 常对象只能调用常函数

class Person
{
public:
	// 在成员函数后面加const, 修饰的是this, 让指针指向的值也不可以修改
	// Person* const this -> const Person* const this
	void showPerson() const
	{
		// a = 100;  // 报错, 指针的值不可以修改
		b = 100;
	}

	void func() {}

	int a;
	// 加上mutable修饰, 特殊变量, 即使在常函数中也可以修改这个值
	mutable int b;
};

int main()
{
	// 在对象前加const, 变为常对象
	const Person p;
	// p.a = 100;  // 报错, 常对象不可修改普通变量
	p.b = 100;     // 常对象可以修改特殊变量
	p.showPerson();  // 常对象只能调用常函数
	// p.func();     // 报错, 常对象不能调用普通函数, 因为普通函数中可能修改普通变量

	system("pause");
	return 0;
}