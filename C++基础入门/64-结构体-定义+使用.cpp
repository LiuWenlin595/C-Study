#include <iostream>
using namespace std;
#include <string>

// �û��Զ������������, �����û��洢��ͬ����������
// �﷨: struct �ṹ���� {�ṹ���Ա�б�};
struct Student
{
	string name;
	int age;
	int score;
}s3;   // �����ֱ���������ʽ, �������������

int main()
{
	// �ṹ����������ʱ�� struct�ؼ��ֿ���ʡ��

	// 1. struct �ṹ���� ������
	struct Student s1;
	s1.name = "s1";
	s1.age = 1;
	s1.score = 1;
	
	// 2. struct �ṹ���� ������ = {��Ա1ֵ, ��Ա2ֵ, ...}
	struct Student s2 = { "s2", 2, 2 };
	
	// 3. ����ṹ��ʱ˳�㴴������
	s3.name = "s3";
	s3.age = 3;
	s3.score = 3;

	cout << s1.name << " " << s1.age << " " << s1.score << endl;
	cout << s2.name << " " << s2.age << " " << s2.score << endl;
	cout << s3.name << " " << s3.age << " " << s3.score << endl;

	system("pause");
	return 0;
}