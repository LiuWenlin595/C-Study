#include <iostream>
using namespace std;
#include <string>

// ����: ��һ������������, ������һ������˽�г�Ա
// �ؼ���: friend
// ����ʵ��: ȫ�ֺ�������Ԫ, ������Ԫ, ��Ա��������Ԫ

class Building
{
	// ȫ�ֺ�������Ԫ
	// friend ����ֵ���� ȫ�ֺ�����(�����б�)
	friend void goodGay(Building& building);

public:
	Building()
	{
		sitting_room = "����";
		bed_room = "����";
	}

public:
	string sitting_room;

private:
	string bed_room;
};

void goodGay(Building &building)
{
	cout << building.sitting_room << endl;
	// ��Ԫ�������Է������Ѷ����˽������
	cout << building.bed_room << endl;
}

int main()
{
	Building building;
	goodGay(building);

	system("pause");
	return 0;
}