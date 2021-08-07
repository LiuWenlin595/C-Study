#include <iostream>
using namespace std;
#include <fstream>

// 程序运行产生的数据都属于临时数据, 当程序运行结束后就会被释放
// 通过文件可以将数据持久化
// 对文件操作需要包含头文件<fstream>

// 写文件步骤
// 1. 包含头文件: #include <fstream>
// 2. 创建流对象: ofstream ofs;
// 3. 打开文件: ofs.open("文件路径", 打开方式);
// 4. 写数据: ofs << "写入的数据";
// 5. 关闭文件: ofs.close();

// 打开方式
// 1. ios::in, 为读文件而打开文件
// 2. ios::ous, 为写文件而打开文件 
// 3. ios::ate, 初始文件索引为文件尾 (应该是写完之后再打开, 索引直接到末尾, 和下面的区分开)
// 4. ios::app, 以追加方式写文件
// 5. ios::trunc, 如果文件存在先删除, 再创建
// 6. ios::binary, 二进制方式
// 文件打开方式可以用|操作符配合使用

int main()
{
	// 1. 包含头文件: #include <fstream>
	// 2. 创建流对象: ofstream ofs;
	ofstream ofs;

	// 3. 打开文件: ofs.open("文件路径", 打开方式);
	ofs.open("test.txt", ios::out);

	// 4. 写数据: ofs << "写入的数据";
	ofs << "测试写文件" << endl;

	// 5. 关闭文件: ofs.close();
	ofs.close();

	system("pause");
	return 0;
}