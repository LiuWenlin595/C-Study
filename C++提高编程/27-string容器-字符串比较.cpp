#include <iostream>
using namespace std;
#include <string>

// string的比较操作
// int compare(const string &s) const;  //与字符串s比较
// int compare(const char *s) const;    //与字符串s比较
int main()
{
    string s1 = "hello";
    string s2 = "xello";

    if (s1.compare(s2) == 0) {
        cout << "str1 等于 str2" << endl;
    } else if (s1.compare(s2) > 0) {
        cout << "str1 大于 str2" << endl;
    } else {
        cout << "str1 小于 str2" << endl;
    }

    return 0; 
}  