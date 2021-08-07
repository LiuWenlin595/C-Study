#include <iostream>
using namespace std;

// �﷨: class ���� : �̳з�ʽ ����
// �̳з�ʽ������: �����̳�, �����̳�, ˽�м̳� 

class Base
{
public:
	int a = 10;
protected:
	int b = 20;
private:
	int c = 30;
};

class Son1 : public Base
{
	// ʹ�ù����̳�, �������Ȩ�����������ɱ�����ͬ�ķ���Ȩ��
	// ��public -> public, protected -> protected, private -> ���ɷ���
public:
	void func()
	{
		cout << a << endl;
		cout << b << endl;
		// cout << c << endl;  // private���ɷ���
	}
};

class Son2 : protected Base
{
	// ʹ�ñ����̳�, �����public��protected�����������Ϊprotected����Ȩ��
	// ��public -> protected, protected -> protected, private -> ���ɷ���
public:
	void func()
	{
		cout << a << endl;
		cout << b << endl;
		// cout << c << endl;  // private���ɷ���
	}
};

class Son3 : private Base
{
	// ʹ��˽�м̳�, �����public��protected�����������Ϊprivate����Ȩ��
	// ��public -> private, protected -> private, private -> ���ɷ���
public:
	void func()
	{
		cout << a << endl;
		cout << b << endl;
		// cout << c << endl;  // private���ɷ���
	}
};

int main()
{
	Son1 s1 = Son1();
	Son2 s2 = Son2();
	Son3 s3 = Son3();

	cout << s1.a << endl;
	// ����, protected���������ⲻ�ɷ���
	// cout << s1.b << endl;
	// cout << s2.a << endl;
	// cout << s2.b << endl;

	// ����, private���������ⲻ�ɷ���
	// cout << s3.a << endl;
	// cout << s3.b << endl;

	system("pause");
	return 0;
}