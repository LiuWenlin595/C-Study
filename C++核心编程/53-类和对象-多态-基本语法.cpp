#include <iostream>
using namespace std;

// ��̬��̬: ��������, ���������
// �ص�: ����׶�ȷ��������ַ
// ��̬��̬: ������ �� �麯�� ʵ�ֵ� ����ʱ��̬
// �ص�: ���н׶�ȷ��������ַ

// ��̬��̬��������:
// 1. �м̳й�ϵ
// 2. ������д������麯�� (��д: ����ֵ���� ������ �����б� ��ȫ��ͬ)

// ��̬��̬��ʹ��:
// �����ָ������� ִ�� �������

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

class Cat: public Animal
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

// ��ַ���, �ڱ���׶ξ�ȷ���˺����ĵ�ַ, ���ܴ�ʲô���ﶼ����Animal����speak����
// ��Ҫ��Сè˵��, ��Ҫ��������Ϊ�麯��, ��������д������麯��
// �����Ļ���ַ�ͻ�������ʱ��, Ҳ�� ��ַ��� 
// �β��൱��Animal& a = c;
void test(Animal& a)
{
	a.laugh();  // ûд�麯��, ��ַ���
	a.speak();  // д���麯��, ��ַ���
}

int main()
{
	Cat c = Cat();
	test(c);

	system("pause");
	return 0;
}