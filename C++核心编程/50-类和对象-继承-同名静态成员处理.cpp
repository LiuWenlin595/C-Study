#include <iostream>
using namespace std;

// ����͸������ͬ���ľ�̬��Ա, ��η���?
// �� 49-�Ǿ�̬��Ա ����һ��
// ��: ���ྲ̬��Աֱ�ӷ���, ���ྲ̬��Ա��������

class Base
{
public:
	static void func()
	{
		cout << "���ྲ̬ͬ����������" << endl;
	}
	static void func(int a)
	{
		cout << "���ྲ̬ͬ���������� " << a << endl;
	}
	static int a;
};
int Base::a = 100;

class Son : public Base
{
public:
	static void func()
	{
		cout << "���ྲ̬ͬ����������" << endl;
	}
	static int a;
};
int Son::a = 200;

int main()
{
	Son s = Son();
	// ��Ϊ�Ǿ�̬��Ա, ����ֻ����һ���ն�����ڴ�ռ�
	cout << sizeof(s) << endl;

	cout << s.a << endl;
	// ������ø��ྲ̬ͬ������: �������.������::ͬ������
	cout << s.Base::a << endl;

	s.func();
	// ������ø��ྲ̬ͬ������: �������.������::ͬ������
	s.Base::func();

	// ���ص������, ��Ȼ���಻���ھ�̬�вκ���
	// ������������г��ָ���ͬ���ľ�̬��Ա����, ����ľ�̬��Ա���������ε����������еľ�̬��Ա����
	// ��ʱ�������ø���ľ�̬�вκ���, ������Ҫ�������� 
	s.Base::func(100);

	system("pause");
	return 0;
}