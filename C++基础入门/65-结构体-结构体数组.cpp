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
	// 作用: 将自定义的结构体放入到数组中方便维护
	// 语法: struct 结构体名 数组名 [元素个数] = {{}, {}, ...}

	// 定义结构体
	struct Student arr[3] = 
	{
		{"s1", 1, 1},
		{"s2", 2, 2},
		{"s3", 3, 3}	
	};

	// 给结构体数组中的元素赋值
	arr[2].name = "new_s3";
	
	// 遍历结构体数组
	for (int i = 0; i < 3; i++) {
		cout << arr[i].name << " " << arr[i].age << " " << arr[i].score << endl;
	}

	system("pause");
	return 0;
}