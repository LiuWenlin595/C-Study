#include <iostream>
using namespace std;
#include <string>

struct Student
{
	string name;
	int age;
	int score;
};

struct Teacher
{
	int id;
	string name;
	int age;
	struct Student stu;
};

int main()
{
	// ����: �ṹ���еĳ�Ա��������һ���ṹ��
	// student��Ҫ������teacher֮ǰ, ����ĸ�ṹ����Ҳ����ӽṹ��

	Teacher t;
	t.id = 1;
	t.name = "t1";
	t.age = 1;
	t.stu.name = "s1";
	t.stu.age = 2;
	t.stu.score = 2;

	// ͨ��ָ����ʽṹ������е�����
	cout << t.name << " " << t.id << " " << t.age << endl;
	cout << t.stu.name << " " << t.stu.age << " " << t.stu.score << endl;

	system("pause");
	return 0;
}