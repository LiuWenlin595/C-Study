#include <iostream>
using namespace std;

int main()
{
	// ��¼�ļ���: constָ��*, *p�Ͳ������޸�; constָ��p, p�Ͳ������޸�
	int a = 10;
	int b = 20;
	// const����ָ��-����ָ��
	// ָ���ָ������޸�, ָ��ָ���ֵ�����Ը�
	const int* p1 = &a;
	// *p1 = 20;  // ����
	p1 = &b;
	
	// const���γ���-ָ�볣��
	// ָ���ָ�򲻿����޸�, ָ��ָ���ֵ�����޸�
	int* const p2 = &a;
	*p2 = 20;
	// p2 = &b;  // ����
	
	// const������ָ��Ҳ���γ���
	// ָ���ָ���ָ���ֵ���������޸�
	const int* const p3 = &a;
	// *p3 = 20;  // ����
	// p3 = &b;   // ����
	
	system("pause");
	return 0;
}