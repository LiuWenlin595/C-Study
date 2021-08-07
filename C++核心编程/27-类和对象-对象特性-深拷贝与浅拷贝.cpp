#include <iostream>
using namespace std;

// ǳ����: �򵥵ĸ�ֵ��������
// ���: �ڶ�����������ռ�, ���п�������

class Person
{
public:
	Person()
	{
		cout << "�޲ι��캯��" << endl;
	}
	Person(int a, int h)
	{
		age = a;
		height = new int(h);
		cout << "�вι��캯��" << endl;
	}
	// �Լ�ʵ�ֿ������캯��, ���ǳ��������������
	Person(const Person& p)
	{
		age = p.age;
		// height = p.height;  // ������Ĭ��ʵ�ִ���
		height = new int(*p.height);  // ���
		cout << "�������캯��" << endl;
	}

	~Person()
	{
		// ��������, ���������ٵ��������ͷŲ���
		if (height != NULL)
		{
			delete height;
			height = NULL;
		}
		cout << "��������" << endl;
	}

	int age = 0;
	int* height;
};

void test()
{
	Person p1 = Person(10, 20);
	cout << p1.age << " " << *p1.height << endl;

	Person p2 = Person(p1);
	cout << p2.age << " " << *p2.height << endl;

	// �Ƚ������ԭ��
	// p2�Ŀ������캯��ִ��ǳ����, ������ʱ���*heightָ��ĵ�ַ����Ĩ��
	// p1ִ��������ʱ��Ҳ���ظ��ͷ�һ���ڴ�, ��ɱ���, ʵ����������캯���Ͳ��ᱨ��
}

int main()
{
	test();

	system("pause");
	return 0;
}