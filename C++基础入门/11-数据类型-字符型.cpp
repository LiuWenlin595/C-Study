#include <iostream>
using namespace std;

int main()
{
	// �ַ���char����������ʽ
	
	char ch = 'a';

	// �ַ��ͱ�����ռ�ڴ��С: 1
	cout << sizeof(char) << endl;

	// �ַ��ͳ�������
	//char ch2 = "b";   //������˫����
	//char ch3 = 'ab';  //ֻ����һ���ַ�

	// �ַ��ͱ�����Ӧ��ASCII��
	// �ַ��ͱ�������Ӧ��ASCII����뵽�洢��Ԫ
	cout << (int)ch << endl;
}