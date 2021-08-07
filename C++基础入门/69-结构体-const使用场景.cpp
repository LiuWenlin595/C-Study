#include <iostream>
using namespace std;
#include <string>

struct Student
{
	string name;
	int age;
	int score;
};

// 使用值传递, 每次都要开辟新的空间, 浪费内存
// 使用地址传递, 将函数形参改为指针, 不会复制一个新的副本出来, 可以减少内存空间
// 为了防止地址传递在函数体内修改实参, 所以形参定义一个const, 禁止函数对实参进行修改
void print (const Student* p)
{
	// p->age = 200;  // 报错, 无法修改, 避免了误操作
	cout << p->name << " " << p->age << " " << p->score << endl;
}

int main()
{
	// 作用: 将结构体作为参数向函数中传递

	Student s = { "s1", 1, 1 };

	cout << s.name << " " << s.age << " " << s.score << endl;
	print(&s);
	cout << s.name << " " << s.age << " " << s.score << endl;

	system("pause");
	return 0;
}