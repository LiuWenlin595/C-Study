#include <iostream>
using namespace std;

class Person
{
public:
	// ��̬��Ա����
	// 1. ���ж�����ͬһ������
	// 2. �ڱ���׶η����ڴ�
	// 3. ��������, �����ʼ��
	static int a;

private:
	static int b;
};

// �����ʼ��
int Person::a = 100;
int Person::b = 300;

int main()
{
	// ͨ��������з���
	Person p1;
	cout << p1.a << endl;

	// ���ж�����ͬһ������
	Person p2;
	p2.a = 200;
	cout << p1.a << " " << p2.a << endl;

	// ͨ���������з���
	cout << Person::a << endl;

	// ��̬��Ա����Ҳ�з���Ȩ��
	// cout << Person::b << endl; // ����, private��Ȩ�޷���

	system("pause");
	return 0;
}