#include <iostream>
using namespace std;
#include <string>

// string的访问和修改字符操作
// char& operator[](int n); //通过[]方式取字符
// char& at(int n); //通过at方法获取字符
int main()
{
    string s = "hello";

    // 1. 通过[]访问单个字符
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }
    cout << endl;

    // 2. 通过at方式访问单个字符
    for (int i = 0; i < s.size(); i++) {
        cout << s.at(i) << " ";
    }
    cout << endl;

    // 修改单个字符
    s[0] = 'x';
    cout << "str = " << s << endl;

    s.at(1) = 'x';
    cout << "str = " << s << endl;

    return 0; 
}  