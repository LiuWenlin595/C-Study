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
	// 作用: 通过指针访问结构体的成员

	// 定义结构体变量
	Student s1 = { "s1", 1, 1 };

	// 通过指针指向结构体变量
	Student* p = &s1;

	// 通过指针访问结构体变量中的数据
	cout << p->name << " " << p->age << " " << p->score << endl;

	system("pause");
	return 0;
}