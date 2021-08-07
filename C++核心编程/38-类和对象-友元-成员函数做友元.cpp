#include <iostream>
using namespace std;
#include <string>

// 这里需要做声明, 否则GoodGay里面的属性不认识Building
class Building;

class GoodGay
{
public:
	GoodGay();
	void visit();

private:
	Building* building;
};

class Building
{
	// 成员函数做友元
	// friend 返回值类型 类名::成员函数名(参数列表)
	friend void GoodGay::visit();

public:
	Building();

public:
	string sitting_room;

private:
	string bed_room;
};

// 类外写构造函数 (学习拓展)
Building::Building()
{
	sitting_room = "客厅";
	bed_room = "卧室";
}

GoodGay::GoodGay()
{
	building = new Building();
}

void GoodGay::visit()
{
	cout << building->sitting_room << endl;
	cout << building->bed_room << endl;
}


int main()
{
	GoodGay gg;
	gg.visit();

	system("pause");
	return 0;
}