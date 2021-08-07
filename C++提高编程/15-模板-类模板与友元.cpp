#include <iostream>
using namespace std;
#include <string>

// 全局函数类内实现: 直接在类内声明友元即可
// 全局函数类外实现: 需要提前让编译器知道全局函数的存在(不建议使用)

// 全局函数类外实现: 需要提前让编译器知道全局函数的存在
template<class T1, class T2>
class Person;

template<class T1, class T2>
void printPerson2(Person<T1, T2>& p) {
    cout << p.m_Name << " " << p.m_Age << endl;
}

template<class T1, class T2>
class Person {
    // 全局函数类内实现: 直接在类内声明友元即可
    friend void printPerson1(Person<T1, T2>& p) {
        cout << p.m_Name << " " << p.m_Age << endl;
    }

    // 全局函数类外实现: 需要提前让编译器知道全局函数的存在
    // 加一个空模板的参数列表, 如果不加的话类内是声明了普通函数, 类外是实现了函数模板, 匹配不上(不明觉厉)
    friend void printPerson2<>(Person<T1, T2>& p);

public:
    Person(T1 name, T2 age) {
        this->m_Name = name;
        this->m_Age = age;
    }

private:
    T1 m_Name;
    T2 m_Age;
};

int main()
{
    Person<string, int> p("Tom", 10);
    printPerson1(p);
    printPerson2(p);

    return 0;
} 