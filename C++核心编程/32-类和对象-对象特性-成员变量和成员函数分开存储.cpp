#include <iostream>
using namespace std;

// ��Ա���� �� ��Ա���� �ֿ��洢��
class Person1
{

};
class Person2
{
	// �Ǿ�̬��Ա����
	int a;
};
class Person3
{
	// ��̬��Ա����, �����������Ĵ洢�ռ�
	static int a;
};
class Person4
{
	// �Ǿ�̬��Ա����, �����������Ĵ洢�ռ�
	void func() {}
};
class Person5
{
	// ��̬��Ա����, �����������Ĵ洢�ռ�
	static void func() {}
};

int main()
{
	Person1 p1;
	// �ն���ռ���ڴ�ռ�Ϊ1
	// C++���������ÿ���ն���Ҳ����һ���ڴ�ռ�, ��Ϊ�����ֿն���ռ�ڴ��λ��
	// ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << sizeof(p1) << endl;
	
	Person2 p2;
	cout << sizeof(p2) << endl;

	Person3 p3;
	cout << sizeof(p3) << endl;

	Person4 p4;
	cout << sizeof(p4) << endl;

	Person4 p5;
	cout << sizeof(p5) << endl;

	system("pause");
	return 0;
}