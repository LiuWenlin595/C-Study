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
	// ����: ͨ��ָ����ʽṹ��ĳ�Ա

	// ����ṹ�����
	Student s1 = { "s1", 1, 1 };

	// ͨ��ָ��ָ��ṹ�����
	Student* p = &s1;

	// ͨ��ָ����ʽṹ������е�����
	cout << p->name << " " << p->age << " " << p->score << endl;

	system("pause");
	return 0;
}