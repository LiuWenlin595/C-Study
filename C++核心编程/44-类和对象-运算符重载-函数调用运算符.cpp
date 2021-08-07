#include <iostream>
using namespace std;
#include <string>

// 函数调用运算符()重载

class MyPrint
{
public:
	void operator() (string s)
	{
		cout << s << endl;
	}
};

class MyAdd
{
public:
	int operator() (int a, int b)
	{
		return a + b;
	}
};

int main()
{
	// 由于使用起来非常像函数调用, 因此称为仿函数
	// 仿函数非常灵活, 没有固定的写法 
	MyPrint mp = MyPrint();
	mp("haha");
	
	MyAdd ma = MyAdd();
	cout << ma(1, 2) << endl;

	// 匿名对象调用仿函数
	cout << MyAdd() (3, 4) << endl;

	system("pause");
	return 0;
}