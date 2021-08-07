#include <iostream>
using namespace std;
#include <string>

// ������Ҫ������, ����GoodGay��������Բ���ʶBuilding
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
	// ��Ա��������Ԫ
	// friend ����ֵ���� ����::��Ա������(�����б�)
	friend void GoodGay::visit();

public:
	Building();

public:
	string sitting_room;

private:
	string bed_room;
};

// ����д���캯�� (ѧϰ��չ)
Building::Building()
{
	sitting_room = "����";
	bed_room = "����";
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