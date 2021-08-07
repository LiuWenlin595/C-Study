#include <iostream>
using namespace std;

int main()
{
	// 常用的转义字符
	// \n: 跳到下一行
	cout << "Hello World\n";
	cout << "Hello World" << endl;

	// \t: 跳到下一个Tab（输出比较整齐）
	cout << "aaa\t" << "bbb" << endl;
	
	// \\: 代表一个反斜杠\字符
	cout << "aaa\\" << endl;

	system("pause");
	return 0;
}