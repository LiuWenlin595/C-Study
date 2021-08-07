#include <iostream>
using namespace std;
#include <string>

// string本质是一个类, 类内部封装了char*, 管理这个字符串, 是一个char*型的容器
//

// string的构造函数
// 1. string()                      创建一个空的字符串
// 2. string(const char* s)         使用字符串s初始化
// 3. string(const string& str)     使用一个string对象初始化另一个string对象
// 4. string(int n, char c)         使用n个字符c初始化
int main()
{
    string s1;  // 默认构造

    // 参考指针常量和常量指针
    const char* str = "hello world";
    string s2(str);

    string s3(s2);
 
    string s4(4, 'a');

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    return 0; 
}   