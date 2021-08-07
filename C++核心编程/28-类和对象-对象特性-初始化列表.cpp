#include <iostream>
using namespace std;

// 作用: C++提供了初始化列表语法, 用来初始化属性
// 语法: 构造函数(): 属性1(值1), 属性2(值2), ... {}

class Person
{
public:
	Person(int a, int b, int c): p_a(a), p_b(b), p_c(c)
	{

	}

	void print()
	{
		cout << p_a << " " << p_b << " " << p_c << endl;
	}

	int p_a;
	int p_b;
	int p_c;
};

int main()
{
	Person p = Person(10, 20, 30);
	p.print();

	system("pause");
	return 0;
}