#include <iostream>
using namespace std;

// ���߱���������������μ���ε��ú���, ������ʵ��������Ե�������
// ��������д���, ���Ƕ���ֻ����һ��
// ��main����֮ǰ����, ��main����֪��max����, ���������Ļ�main�Ҳ���max�ᱨ��
// ��������: ���������� ������ (�����б�)
int max(int a, int b);
int max(int a, int b);
int max(int a, int b);

int main()
{
	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;
	system("pause");
	return 0;
}

int max(int a, int b) {
	return a > b ? a : b;
}