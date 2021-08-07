#include <iostream>
#include <string>
using namespace std;

// 模板局限性
// 模板并不是万能的, 有些特定数据类型, 需要用具体化方式做特殊实现

class Person {
public:
    Person(string name, int age) {
        this->m_Name = name;
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};

// 对比两个数据是否相等的函数
template<typename T>
bool myCompare(T& a, T& b) {
    if (a == b) {
        return true;
    } else {
        return false;
    }
}

// 利用具体化Person的版本实现代码, 具体化优先调用
// 即06-模板的第一点, 优先调用普通函数 (另一种判断相等的方法是重载运算符)
bool myCompare(Person& p1, Person& p2) {
    if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    int a = 10;
    int b = 20;
    bool res1 = myCompare(a, b);
    cout << res1 << endl;

    Person p1("Tom", 10);
    Person p2("Tom", 10);
    bool res2 = myCompare(p1, p2);
    cout << res2 << endl;

    return 0;
} 