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
	// 值传递不会修改实参
	s.age = 100;
	cout << s.name << " " << s.age << " " << s.score << endl;
}

void print2 (Student* p)
{
	// 地址传递会修改实参
	p->age = 200;
	cout << p->name << " " << p->age << " " << p->score << endl;
}

int main()
{
	// 作用: 将结构体作为参数向函数中传递

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