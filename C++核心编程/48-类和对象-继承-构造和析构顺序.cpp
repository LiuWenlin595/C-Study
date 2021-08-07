#include <iostream>
using namespace std;

// 父类构造 -> 子类构造 -> 子类析构 -> 父类析构

class Base
{
public:
	Base()
	{
		cout << "父类构造函数" << endl;
	}
	~Base()
	{
		cout << "父类析构函数" << endl;
	}
};

class Son : public Base
{
public:
	Son()
	{
		cout << "子类构造函数" << endl;
	}
	~Son()
	{
		cout << "子类析构函数" << endl;
	}
};

void test()
{
	Son s = Son();
}

int main()
{
	test();

	system("pause");
	return 0;
}