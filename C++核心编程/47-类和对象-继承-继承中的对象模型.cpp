#include <iostream>
using namespace std;

// �Ӹ���̳й����ĳ�Ա, ��Щ�������������?

// ���ӻ�����(�鿴��������Ա�ķֲ�):
// vs 2017�Ŀ�����Ա������ʾ��
// cd G:\VS2017\Project\Bilibili\Bilibili
// cl /d1 reportSingleClassLayoutSon "47 ��Ͷ���-�̳�-�̳��еĶ���ģ��.cpp"

class Base
{
public:
	int a = 10;
protected:
	int b = 20;
private:
	int c = 30;
};

class Son : public Base
{
public:
	int d;
};

int main()
{
	Son s = Son();
	// ���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	// ������˽�г�Ա�����Ǳ���������������, ��˷��ʲ���, ��ȷʵ���̳���ȥ��
	cout << sizeof(s) << endl;

	system("pause");
	return 0;
}