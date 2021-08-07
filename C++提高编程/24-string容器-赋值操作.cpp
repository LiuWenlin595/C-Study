#include <iostream>
using namespace std;
#include <string>

// string的赋值操作 
// 1. string& operator=(const char* s)         char*类型字符串, 赋值给当前的字符串
// 2. string& operator=(const string &s)       把字符串s赋给当前的字符串
// 3. string& operator=(char c)                字符赋值给当前的字符串
// 4. string& assign(const char* s)            把字符串s赋给当前的字符串
// 5. string& assign(const char* s, int n)     把字符串s的前n个字符赋给当前的字符串
// 6. string& assign(const string& s)          把字符串s赋给当前字符串
// 7. string& assign(int n, char c)            用n个字符c赋给当前字符串
int main()
{
    string s1 = "hello world";

    string s2 = s1;

    string s3;
    s3 = 'a';

    string s4;
    s4.assign("hello world");

    string s5;
    s5.assign("hello world", 7);

    string s6;
    s6.assign(s1);

    string s7;
    s7.assign('a', 10);

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;
    cout << s7 << endl;

    return 0; 
}   