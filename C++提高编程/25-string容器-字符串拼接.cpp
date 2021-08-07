#include <iostream>
using namespace std;
#include <string>

// string的拼接操作 
// 1. string& operator+=(const char* s)                 char*类型字符串, 追加到当前的字符串
// 2. string& operator+=(const string &s)               把字符串s追加给当前的字符串
// 3. string& operator+=(char c)                        字符追加给当前的字符串
// 4. string& append(const char* s)                     把字符串s追加给当前的字符串
// 5. string& append(const char* s, int n)              把字符串s的前n个字符追加给当前的字符串
// 6. string& append(const string& s)                   把字符串s追加给当前字符串
// 7. string& append(const string& s, int pos, int n)   字符串s中从pos开始的n个字符连接到字符串结尾
int main()
{
    string s1 = "hello world";
    s1 += "hahaha";

    string s2 = s1;
    s2 += s1;

    string s3;
    s3 = 'a';
    s3 += 'b';

    string s4 = "haha";
    s4.append("xixi");

    string s5 = "haha";
    s5.append("1234567", 3);

    string s6 = "haha";
    s6.append(s1);

    string s7 = "haha";
    s7.append(s1, 3, 5);

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;
    cout << s7 << endl;
    return 0; 
}   