#include <iostream>
using namespace std;

// ���ַ���
// ����������: �вι���, �޲ι���(Ĭ�Ϲ���)
// �����ͷ���: ��ͨ����, ��������

// ���ֵ��÷�ʽ
// ���ŷ�, ��ʾ��, ��ʽת����

class Person
{
public:
	Person()
	{
		cout << "�޲ι��캯��" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "�вι��캯��" << endl;
	}
	Person(const Person& p)
	{
		age = p.age;
		cout << "�������캯��" << endl;
	}
	~Person()
	{
		cout << "��������" << endl;
	}

	int age = 0;
};

// ����
void func()
{
	// ���ŷ�
	Person p1;  // Ĭ�Ϲ��캯��, ���ŷ�����ʱ��Ҫ��(), ��ʾ�����Լ�(), newҲ���Լ�()
	Person p2(10);  // �вι��캯��
	Person p3(p2);  // �������캯��
	cout << p1.age << " " << p2.age << " " << p3.age << endl;

	// ��ʾ��
	Person p4 = Person();
	Person p5 = Person(10);
	Person p6 = Person(p5);
	cout << p4.age << " " << p5.age << " " << p6.age << endl;
	Person(20);  // ��������, ��ǰ��ִ�н�����, ϵͳ���������յ���������
	// ��Ҫ���ÿ������캯����ʼ����������, ����������ΪPerson(p3) === Person p3, �൱�ڳ�ʼ����Ϊp3��Ĭ�Ϲ��캯��
	//Person(p3);  // ����

	// ��ʽת����
	Person p7 = 10;
	Person p8 = p7;
	cout << p7.age << " " << p8.age << endl;
}

int main()
{
	func();

	system("pause");
	return 0;
}