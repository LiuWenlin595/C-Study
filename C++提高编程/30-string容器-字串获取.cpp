#include <iostream>
using namespace std;
#include <string>

// string求子串
// string substr(int pos = 0, int n = npos) const;  //返回由pos开始的n个字符组成的字符串
int main()
{
    string str = "abcdefg";

    string subStr = str.substr(1, 3);
    cout << subStr << endl;

    string email = "zhangsan@qq.com";
    int pos = email.find('@');
    string userName = email.substr(0, pos);
    cout << userName << endl;

    return 0; 
}  