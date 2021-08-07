#include <iostream>
using namespace std;
#include <string>

int main()
{
	// C风格字符串 char 变量名[] = "字符串值"
	// 使用单引号会报错
	char str1[] = "Hello World";
	cout << str1 << endl;
	
	// C++风格字符串 string 变量名 = "字符串值"
	// 使用C++风格字符串需要 #include <string>
	// 使用单引号会报错
	string str2 = "Hello World";
	cout << str2 << endl;

	system("pause");
	return 0;
}