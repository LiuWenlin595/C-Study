#include <iostream>
using namespace std;

// ����: �ɳ���Ա������ͷ�, ������Ա���ͷ�, ����������ɲ���ϵͳ����
// ֻҪ���Ǵ����ջ�������ݶ�����ڶ���, ����new������, ����ָ��
int* func()
{
	// ����new�ؼ���, �����ݿ��ٵ�����
	// ָ���Ǿֲ�����, ����ջ��; ָ�뱣���������new������, ���ڶ���
	int* p = new int(10);
	return p;
}

int main()
{
	// ָ��pָ��ĵ�ַ���ݲ��ᱻ�ͷ�, ���ǳ���Ա����
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}