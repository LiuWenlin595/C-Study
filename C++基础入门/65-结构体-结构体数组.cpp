#include <iostream>
using namespace std;
#include <string>

struct Student
{
	string name;
	int age;
	int score;
};

int main()
{
	// ����: ���Զ���Ľṹ����뵽�����з���ά��
	// �﷨: struct �ṹ���� ������ [Ԫ�ظ���] = {{}, {}, ...}

	// ����ṹ��
	struct Student arr[3] = 
	{
		{"s1", 1, 1},
		{"s2", 2, 2},
		{"s3", 3, 3}	
	};

	// ���ṹ�������е�Ԫ�ظ�ֵ
	arr[2].name = "new_s3";
	
	// �����ṹ������
	for (int i = 0; i < 3; i++) {
		cout << arr[i].name << " " << arr[i].age << " " << arr[i].score << endl;
	}

	system("pause");
	return 0;
}