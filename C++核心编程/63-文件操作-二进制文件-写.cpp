#include <iostream>
using namespace std;
#include <fstream>

// 函数原型: ostream&.write(const char* buffer, int len);

class Person
{
public:
	char name[64];
	int age;
};

int main()
{
	// 1. 包含头文件: #include <fstream>
	// 2. 创建流对象: ofstream ofs;
	ofstream ofs("person.txt", ios::out | ios::binary);  // 调用ofstream的构造函数打开文件

	// 3. 打开文件: ofs.open("文件路径", 打开方式);
	//ofs.open("test.txt", ios::out | ios::binary);

	// 4. 写数据: ostream&.write(const char* buffer, int len)
	Person p = { "张三", 20 };
	// &p === Person*, 把Person*强转成char*
	ofs.write((const char*)&p, sizeof(Person));

	// 5. 关闭文件: ofs.close();
	ofs.close();

	system("pause");
	return 0;
}