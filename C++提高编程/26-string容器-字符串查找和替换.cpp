#include <iostream>
using namespace std;
#include <string>

// string的查找和替换操作 
// 1. int find(const string& str, int pos = 0) const;      //查找str第一次出现位置,从pos开始查找
// 2. int find(const char* s, int pos = 0) const;          //查找s第一次出现位置,从pos开始查找
// 3. int find(const char* s, int pos, int n) const;       //从pos位置查找s的前n个字符第一次位置
// 4. int find(const char c, int pos = 0) const;           //查找字符c第一次出现位置
// 5. int rfind(const string& str, int pos = npos) const;  //查找str最后一次位置,从pos开始查找
// 6. int rfind(const char* s, int pos = npos) const;      //查找s最后一次出现位置,从pos开始查找
// 7. int rfind(const char* s, int pos, int n) const;      //从pos查找s的前n个字符最后一次位置
// 8. int rfind(const char c, int pos = 0) const;          //查找字符c最后一次出现位置
// 9. string& replace(int pos, int n, const string& str);  //替换从pos开始n个字符为字符串str, 如果str长度大于n, 则都会替换
// 10.string& replace(int pos, int n,const char* s);       //替换从pos开始的n个字符为字符串s, 如果s长度大于n, 则都会替换
int main()
{
    // 每种情况懒得写了, 反正一看文档就看得懂
    string s1 = "hello worlld";
    int pos1 = s1.find("lw");
    int pos2 = s1.find("ll");
    int pos3 = s1.rfind("ll");
    cout << s1 << endl;
    cout << pos1 << endl;
    cout << pos2 << endl;
    cout << pos3 << endl;

    s1.replace(1, 3, "2222");
    cout << s1 << endl;

    return 0; 
}   