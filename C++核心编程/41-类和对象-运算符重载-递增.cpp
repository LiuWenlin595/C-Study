#include <iostream>
using namespace std;

// �����������������: ʵ���Լ�����������
// ����������ó�Ա��������, û�Թ���ȫ�ֺ������ػ���ô��

// �Զ�������
class MyInteger
{
public:
	// ����ǰ��++�����
	// ǰ�õ�����������
	MyInteger& operator++()
	{
		a++;
		return *this;
	}

	// ���غ���++�����
	// int��ʾռλ����, ��������ǰ�úͺ��õ���
	// ���õ�����Ҫ����һ���µ�MyInteger, ��Ϊ����ִ�����tmp�ᱻ�ͷ�
	MyInteger operator++(int)
	{
		// �� ��¼��ʱ���
		MyInteger tmp = *this;
		// �� ����
		a++;
		// ���صĲ�����*this����, ������һ��MyInteger
		return tmp;
	}
	int a = 10;
};

ostream& operator<<(ostream& cout, MyInteger& my_int)
{
	cout << my_int.a ;
	return cout;
}

int main()
{
	MyInteger my_int = MyInteger();
	MyInteger tmp = my_int++;
	cout << tmp << endl;
	// ��Ҫд���������ʽ, ֱ������д�ᱨ��
	// ��Ϊֱ��д�Ļ����ɵ�����������, û�ж�Ӧ�ĵ������, ���Ҳû�а취ͨ�����������
	// ��ִ����++������, ϵͳ���������յ���������
	// ��������ͨ���Ļ�, ��Ҫ�Ѳ�����MyInteger& ��Ϊ MyInteger, ���������󴫽���
	// cout << my_int++ << endl;

	cout << my_int << endl;
	cout << ++my_int << endl;

	system("pause");
	return 0;
}