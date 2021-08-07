#include <iostream>
using namespace std;
#include <string>

// 作用: 让一个函数或者类, 访问另一个类中私有成员
// 关键字: friend
// 三种实现: 全局函数做友元, 类做友元, 成员函数做友元

class Building
{
	// 全局函数做友元
	// friend 返回值类型 全局函数名(参数列表)
	friend void goodGay(Building& building);

public:
	Building()
	{
		sitting_room = "客厅";
		bed_room = "卧室";
	}

public:
	string sitting_room;

private:
	string bed_room;
};

void goodGay(Building &building)
{
	cout << building.sitting_room << endl;
	// 友元函数可以访问朋友对象的私有属性
	cout << building.bed_room << endl;
}

int main()
{
	Building building;
	goodGay(building);

	system("pause");
	return 0;
}