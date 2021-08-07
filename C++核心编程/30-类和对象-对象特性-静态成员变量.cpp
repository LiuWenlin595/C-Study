#include <iostream>
using namespace std;

class Person
{
public:
	// 静态成员变量
	// 1. 所有对象共享同一份数据
	// 2. 在编译阶段分配内存
	// 3. 类内声明, 类外初始化
	static int a;

private:
	static int b;
};

// 类外初始化
int Person::a = 100;
int Person::b = 300;

int main()
{
	// 通过对象进行访问
	Person p1;
	cout << p1.a << endl;

	// 所有对象共享同一份数据
	Person p2;
	p2.a = 200;
	cout << p1.a << " " << p2.a << endl;

	// 通过类名进行访问
	cout << Person::a << endl;

	// 静态成员变量也有访问权限
	// cout << Person::b << endl; // 报错, private无权限访问

	system("pause");
	return 0;
}