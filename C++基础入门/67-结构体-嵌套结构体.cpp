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
	// 作用: 结构体中的成员可以是另一个结构体
	// student需要定义在teacher之前, 否则母结构体会找不到子结构体

	Teacher t;
	t.id = 1;
	t.name = "t1";
	t.age = 1;
	t.stu.name = "s1";
	t.stu.age = 2;
	t.stu.score = 2;

	// 通过指针访问结构体变量中的数据
	cout << t.name << " " << t.id << " " << t.age << endl;
	cout << t.stu.name << " " << t.stu.age << " " << t.stu.score << endl;

	system("pause");
	return 0;
}