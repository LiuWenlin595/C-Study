#include <iostream>
using namespace std;
#include <fstream>
#include <string>

// 读文件步骤
// 1. 包含头文件: #include <fstream>
// 2. 创建流对象: ifstream ifs;
// 3. 打开文件: ifs.open("文件路径", 打开方式);
// 4. 读数据: 四种方式读取
// 5. 关闭文件: ifs.close();

int main()
{
	// 1. 包含头文件: #include <fstream>
	// 2. 创建流对象: ifstream ifs;
	ifstream ifs;

	// 3. 打开文件: ifs.open("文件路径", 打开方式);
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return 0;
	}

	// 4. 读数据 (前三个都是一行一行读, 最后一个是一个字符一个字符读, 但是读的结果都是一样的)
	// 第一种
	/*char buf[1024] = { 0 };
	while (ifs >> buf) 
	{
		cout << buf << endl;
	}*/

	//// 第二种 
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/

	// 第三种
	/*string buf;
	while (getline(ifs, buf))
	{ 
		cout << buf << endl;
	}*/

	// 第四种
	char c;
	while ((c = ifs.get()) != EOF)   // EOF === end of file
	{
		cout << c;
	}

	// 5. 关闭文件: ifs.close();
	ifs.close();

	system("pause");
	return 0;
}