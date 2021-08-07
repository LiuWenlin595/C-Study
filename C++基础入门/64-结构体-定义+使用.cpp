#include <iostream>
using namespace std;
#include <string>

// 用户自定义的数据类型, 允许用户存储不同的数据类型
// 语法: struct 结构体名 {结构体成员列表};
struct Student
{
	string name;
	int age;
	int score;
}s3;   // 第三种变量创建方式, 后面跟个变量名

int main()
{
	// 结构体变量定义的时候 struct关键字可以省略

	// 1. struct 结构体名 变量名
	struct Student s1;
	s1.name = "s1";
	s1.age = 1;
	s1.score = 1;
	
	// 2. struct 结构体名 变量名 = {成员1值, 成员2值, ...}
	struct Student s2 = { "s2", 2, 2 };
	
	// 3. 定义结构体时顺便创建变量
	s3.name = "s3";
	s3.age = 3;
	s3.score = 3;

	cout << s1.name << " " << s1.age << " " << s1.score << endl;
	cout << s2.name << " " << s2.age << " " << s2.score << endl;
	cout << s3.name << " " << s3.age << " " << s3.score << endl;

	system("pause");
	return 0;
}