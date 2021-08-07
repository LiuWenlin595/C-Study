#include <iostream>
using namespace std;

// ���μ̳�: Base������age����, Son1�̳�һ��, Son2�̳�һ��, GrandSonӦ�õ���Base����һ������?
// ��Ȼ, ���Son1��Son2���Լ�������age, �Ǿͱ���˶�̳�����, �ο� 51-��̳�

class Base
{
public:
	Base()
	{
		age = 100;
	}

	int age;
};

// ���� ��̳� ��� ���μ̳� ������
// ��virtual���ε���(Base) ��Ϊ �����
class Son1: virtual public Base {};

class Son2 : virtual public Base {};

class GrandSon : public Son1, public Son2 {};


int main()
{
	GrandSon gs = GrandSon();
	// ���� �̳�Son1��vbptr, �̳�Son2��vbptr, �����Լ���age
	cout << sizeof(gs) << endl;
	// �����ڸ���, ����age���� ʵ��ָ�� ͬһ����ַ������
	gs.Son1::age = 0; 
	gs.Son2::age = 1;
	cout << gs.age << endl;
	cout << gs.Son1::age << endl;
	cout << gs.Son2::age << endl;

	// ���� 47-�̳��еĶ���ģ�� �еĿ��ӻ��������鿴�����Ա�ֲ�
	// vbptr (=== virtual base pointer) ָ�� vbtable (=== virtual base tables)
	// vbtable ��¼���Ե�ƫ����, ͨ��vbptr���Է���vbtable�õ�ƫ����
	// vbptr��ǰ��ַ + ƫ���� = Ψһ��age���ݵĵ�ַ

	system("pause");
	return 0;
}