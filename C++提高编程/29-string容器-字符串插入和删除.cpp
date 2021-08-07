#include <iostream>
using namespace std;
#include <string>

// string的插入和删除操作
// string& insert(int pos, const char* s);      //插入字符串
// string& insert(int pos, const string& str);  //插入字符串
// string& insert(int pos, int n, char c);      //在指定位置插入n个字符c
// string& erase(int pos, int n = npos);        //删除从Pos开始的n个字符
int main()
{
    string str = "hello";

    // 插入
    str.insert(1, "222");
    cout << "str = " << str << endl;

    // 删除
    str.erase(1, 3);
    cout << "str = " << str << endl;

    return 0; 
}  