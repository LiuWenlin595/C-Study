#include <iostream>
using namespace std;

// �﷨: ����ֵ���� ������ (��������) {}

// Ŀǰռλ����ֻ֪������, �����ὲ��ôʹ��
// ռλ����Ҳ������Ĭ��ֵ
int func(int a, int = 10)
{
	return a;
}

int main()
{
	cout << func(10, 20) << endl;

	system("pause");
	return 0;
}	