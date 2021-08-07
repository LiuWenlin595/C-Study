#include <iostream>
using namespace std;

// 左移运算符重载作用: 输出自定义数据类型

class Person
{
public:
	// 1. 成员函数重载<<
	// p.opeartor<< (cout) === p << cout  
	// 不会利用成员函数重载<<运算符, 因为无法实现cout在左侧
	/*Person operator<<(Person &p)
	{

	}*/

	int a;
	int b;
};

// 2. 只能使用全局函数重载<<
// opeartor<< (cout, p) === cout << p
// ostream全局只能有一个, 所以需要传引用
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
	// 根据链式法则, 如果cout << p 返回void, 则后面无法再加 << endl
	// 所以让operator<< 继续返回ostream&, 然后继续执行 new_cout << endl;
	cout << p1 << endl;

	system("pause");
	return 0;
}