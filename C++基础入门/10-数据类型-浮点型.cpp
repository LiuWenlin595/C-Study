#include <iostream>
using namespace std;

int main()
{
	// ������
	// 1. ������ float
	// 2. ˫���� double

	//�������f, ��������Ĭ��Ϊdouble, double->float��Ҫ������һ��ת��
	//����f, �������Ὣ����Ϊfloat
	float f1 = 3.14f;

	//Ĭ�������, �������λ��Ч����
	double d1 = 3.1415926535;

	//��ѧ������
	float f2 = 3e2f;
	float f3 = 3e-2f;

	cout << f1 << " " << d1 << " " << f2 << " " << f3 << endl;

	system("pause");
	return 0;
}