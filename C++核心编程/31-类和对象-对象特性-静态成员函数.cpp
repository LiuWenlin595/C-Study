#include <iostream>
using namespace std;

// ��̬��Ա����
// ���ж�����ͬһ������
// ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person
{
public:
	static void func()
	{
		cout << a << endl;
		a = 100;
		cout << a << endl;
		// ����, ��̬�������ܷ��ʷǾ�̬����
		// ��Ϊ��̬������֪���ı���һ�������b, ֻ�о�̬�����ŻṲ��һ������
		// b = 200; 
		cout << "static func����" << endl;
	}

	static int a;
	int b;

private:
	static void func2()
	{
		cout << "private static func����" << endl;
	}
};

int Person::a = 10;

int main()
{
	// ͨ���������
	Person p;
	p.func();

	// ͨ����������
	Person::func();

	// ��̬��Ա����Ҳ�з���Ȩ��
	//Person::func2();  // ����, private��Ȩ�޷���

	system("pause");
	return 0;
}