#include <iostream>
using namespace std;

// C++���������������: ��װ���̳С���̬
// ��װ������: �����Ժ���Ϊ��Ϊ����, ��ʾ�����е�����; �����Ժ���Ϊ���Կ���Ȩ��
// �﷨: class ����{����Ȩ��: ���� / ��Ϊ};

const double PI = 3.14;

// ���һ��Բ��, ��Բ���ܳ�
class Circle
{
// ����Ȩ��
public:
	// ����
	int r;
	// ��Ϊ
	double cal_c()
	{
		// ����Բ���ܳ�
		return 2 * PI * r;
	}
};

int main()
{
	// ʵ����, ͨ��һ���ഴ��һ������Ĺ���
	Circle c1;
	c1.r = 10;
	cout << c1.cal_c() << endl;
	
	system("pause");
	return 0;
}