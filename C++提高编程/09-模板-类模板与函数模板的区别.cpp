#include <iostream>
#include <string>
using namespace std;

// 类模板与函数模板的主要区别
// 1. 类模板没有自动类型推导的使用方式, 函数模板有
// 2. 类模板在模板参数列表中可以有默认参数, 函数模板没有

// 2. 类模板在模板参数列表中可以有默认参数
template<class NameType, class AgeType = int>
class Person {
public:
    Person(NameType name, AgeType age) {
        this->m_Name = name;
        this->m_Age = age;
    }

    void showPerson() {
        cout << this->m_Name << " " << this->m_Age << endl;
    }

    NameType m_Name;
    AgeType m_Age;
};



int main()
{
    // 1. 类模板没有自动类型推导的使用方式, 只能显式指定类型
    // Person p1("Tom", 10);
    Person<string, int> p1("Tom", 10);
    p1.showPerson();

    // 2. 类模板在模板参数列表中可以有默认参数
    Person<string> p2("jerry", 999);
    p2.showPerson();

    return 0;
} 