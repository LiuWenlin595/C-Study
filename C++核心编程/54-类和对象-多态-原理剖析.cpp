#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
	void laugh()
	{
		cout << "������Ц" << endl;
	}
};

class Cat : public Animal
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
	void laugh()
	{
		cout << "Сè��Ц" << endl;
	}
};

void test(Animal& a)
{
	a.laugh();  // ûд�麯��, ��ַ���
	a.speak();  // д���麯��, ��ַ���
}

int main()
{
	Animal a = Animal();
	Cat c = Cat();
	test(c);

	// ���� 47-�̳��еĶ���ģ�� �еĿ��ӻ��������鿴�����Ա�ֲ�
	// vfptr (=== virtual function pointer) ָ�� vftable (=== virtual base tables)
	// vbtable ��¼������λ��, ͨ��vbptr���Է���vbtable�õ�������������
	
	// ����virtual�Ļ�, Animal��һ���ն���
	// ����virtual, Animal����һ��ָ���麯����vfptrָ��
	// Ȼ��Cat��̳������ָ��, ָ��ָ��ĵ�ַ����, ���Ǻ�����������д
	// Ҳ����vftable�ﱾ�����Animal::speak() ������Ϊ Cat::speak()
	// �����test�����Animal& a.speak(), vfptrʵ��ָ����� Cat::speak()
	cout << sizeof(a) << " " << sizeof(c) << endl;

	system("pause");
	return 0;
}