#include <iostream>
using namespace std;
#include <fstream>

// 函数原型: istream&.read(char* buffer, int len);

class Person
{
public:
	char name[64];
	int age;
};

int main()
{
	// 1. 包含头文件: #include <fstream>
	// 2. 创建流对象: ifstream ifs;
	ifstream ifs;

	// 3. 打开文件: ifs.open("文件路径", 打开方式);
	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return 0;
	}

	// 4. 读数据: istream&.read(char* buffer, int len)
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << p.name << " " << p.age << endl;

	// 5. 关闭文件: ifs.close();
	ifs.close();

	system("pause");
	return 0;
}