#include <iostream>
using namespace std;
#include <string>

// 三种访问权限
// 1. public 公共权限:    成员类内可以访问, 类外可以访问
// 2. protected 保护权限: 成员类内可以访问, 类外不可以访问 (继承关系, 儿子可以访问父亲的保护内容)
// 3. private 私有权限:   成员类内可以访问, 类外不可以访问 (继承关系, 儿子不可以访问父亲的私有内容)

class Person
{
public:
	string name;

protected:
	string car;

private:
	int password;

public:
	void func()
	{
		name = "p1";
		car = "c1";
		password = 1;
		cout << name << " " << car << " " << password << endl;
	}
};
int main()
{
	Person p;
	p.name = "p2";
	//p.car = "c2";  // 报错, 类外访问不到
	//p.password = "2"  // 报错, 类外访问不到
	// 虽然属性不能访问, 但是在类外可以访问函数, 而函数在类内访问属性, 因此间接地在类外访问属性
	p.func();

	system("pause");
	return 0;
}