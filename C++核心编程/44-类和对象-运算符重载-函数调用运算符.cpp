#include <iostream>
using namespace std;
#include <string>

// �������������()����

class MyPrint
{
public:
	void operator() (string s)
	{
		cout << s << endl;
	}
};

class MyAdd
{
public:
	int operator() (int a, int b)
	{
		return a + b;
	}
};

int main()
{
	// ����ʹ�������ǳ���������, ��˳�Ϊ�º���
	// �º����ǳ����, û�й̶���д�� 
	MyPrint mp = MyPrint();
	mp("haha");
	
	MyAdd ma = MyAdd();
	cout << ma(1, 2) << endl;

	// ����������÷º���
	cout << MyAdd() (3, 4) << endl;

	system("pause");
	return 0;
}