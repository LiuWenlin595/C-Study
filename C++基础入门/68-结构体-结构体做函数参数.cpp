#include <iostream>
using namespace std;
#include <string>

struct Student
{
	string name;
	int age;
	int score;
};

void print1 (Student s)
{
	// ֵ���ݲ����޸�ʵ��
	s.age = 100;
	cout << s.name << " " << s.age << " " << s.score << endl;
}

void print2 (Student* p)
{
	// ��ַ���ݻ��޸�ʵ��
	p->age = 200;
	cout << p->name << " " << p->age << " " << p->score << endl;
}

int main()
{
	// ����: ���ṹ����Ϊ���������д���

	Student s;
	s.name = "s1";
	s.age = 1;
	s.score = 1;

	print1(s);
	cout << s.name << " " << s.age << " " << s.score << endl;
	print2(&s);
	cout << s.name << " " << s.age << " " << s.score << endl;

	system("pause");
	return 0;
}