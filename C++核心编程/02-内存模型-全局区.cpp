#include <iostream>
using namespace std;
#include <string>

// ȫ�ֱ���
int g_a = 10;
int g_b = 20;

// const���ε�ȫ�ֳ���
const int c_g_a = 10;

int main()
{
	// ȫ����: ���ȫ�ֱ�������̬�������ַ���������ȫ�ֳ���
	// ������������ڳ���������ɲ���ϵͳ�ͷ�
	// �ֲ������;ֲ���������ȫ������

	// �ֲ�����
	int a = 10;
	int b = 20;

	// ��̬����
	static int s_a = 10;
	static int s_b = 20;

	// �ַ�������
	string str_a = "haha";

	// const���εľֲ�����
	const int c_a = 10;

	cout << "�ֲ�����: " << (int)&a << endl;
	cout << "�ֲ�����: " << (int)&b << endl;
	cout << "ȫ�ֱ���: " << (int)&g_a << endl;
	cout << "ȫ�ֱ���: " << (int)&g_b << endl;
	cout << "��̬����: " << (int)&s_a << endl;
	cout << "��̬����: " << (int)&s_b << endl;
	cout << "�ַ�������: " << (int)&("haha") << endl;
	cout << "ȫ�ֳ���: " << (int)&c_g_a << endl;
	cout << "�ֲ�����: " << (int)&c_a << endl;

	system("pause");
	return 0;
}