#include <iostream>
using namespace std;
#include <string>

// ���ַ���Ȩ��
// 1. public ����Ȩ��:    ��Ա���ڿ��Է���, ������Է���
// 2. protected ����Ȩ��: ��Ա���ڿ��Է���, ���ⲻ���Է��� (�̳й�ϵ, ���ӿ��Է��ʸ��׵ı�������)
// 3. private ˽��Ȩ��:   ��Ա���ڿ��Է���, ���ⲻ���Է��� (�̳й�ϵ, ���Ӳ����Է��ʸ��׵�˽������)

class Person
{
public:
	string name;

protected:
	string car;

private:
	int password;

public:
	void func()
	{
		name = "p1";
		car = "c1";
		password = 1;
		cout << name << " " << car << " " << password << endl;
	}
};
int main()
{
	Person p;
	p.name = "p2";
	//p.car = "c2";  // ����, ������ʲ���
	//p.password = "2"  // ����, ������ʲ���
	// ��Ȼ���Բ��ܷ���, ������������Է��ʺ���, �����������ڷ�������, ��˼�ӵ��������������
	p.func();

	system("pause");
	return 0;
}