#include <iostream>
using namespace std;
#include <string>

struct Student
{
	string name;
	int age;
	int score;
};

// ʹ��ֵ����, ÿ�ζ�Ҫ�����µĿռ�, �˷��ڴ�
// ʹ�õ�ַ����, �������βθ�Ϊָ��, ���Ḵ��һ���µĸ�������, ���Լ����ڴ�ռ�
// Ϊ�˷�ֹ��ַ�����ں��������޸�ʵ��, �����βζ���һ��const, ��ֹ������ʵ�ν����޸�
void print (const Student* p)
{
	// p->age = 200;  // ����, �޷��޸�, �����������
	cout << p->name << " " << p->age << " " << p->score << endl;
}

int main()
{
	// ����: ���ṹ����Ϊ���������д���

	Student s = { "s1", 1, 1 };

	cout << s.name << " " << s.age << " " << s.score << endl;
	print(&s);
	cout << s.name << " " << s.age << " " << s.score << endl;

	system("pause");
	return 0;
}