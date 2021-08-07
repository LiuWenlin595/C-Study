#include <iostream>
using namespace std;

int main()
{
	// 字符型char变量创建方式
	
	char ch = 'a';

	// 字符型变量所占内存大小: 1
	cout << sizeof(char) << endl;

	// 字符型常见错误
	//char ch2 = "b";   //不能用双引号
	//char ch3 = 'ab';  //只能由一个字符

	// 字符型变量对应的ASCII码
	// 字符型变量将对应的ASCII码放入到存储单元
	cout << (int)ch << endl;
}