#include <iostream>
#include <string>
using namespace std;

// 类模板实例化出的对象, 向函数传参有三种方式
// 1. 指定传入的类型, 直接显式对象的数据类型(最常用)
// 2，参数模板化, 将对象中的参数变为模板进行传递
// 3. 整个类模板化, 将这个对象类型模板化进行传递

template<class T1, class T2>
class Person {
public:
    Person(T1 name, T2 age) {
        this->m_Name = name;
        this->m_Age = age;
    }
    void showPerson() {
        cout << m_Name << " " << m_Age << endl;
    }
    T1 m_Name;
    T2 m_Age;
};

// 1. 指定传入的类型, 直接显式对象的数据类型(最常用)
void printPerson1(Person<string, int>& p) {
    p.showPerson();
}

// 2，参数模板化, 将对象中的参数变为模板进行传递
template<typename T1, typename T2>
void printPerson2(Person<T1, T2>& p) {
    p.showPerson();
    // 看模板的类型
    cout << "T1的类型为: " << typeid(T1).name() << endl;
    cout << "T2的类型为: " << typeid(T2).name() << endl;
}

// 3. 整个类模板化, 将这个对象类型模板化进行传递
template<class T>
void printPerson3(T& p) {
    p.showPerson();
    // 看模板的类型
    cout << "T的类型为: " << typeid(T).name() << endl;
}


int main()
{
    Person<string, int> p("Tom", 10);
    printPerson1(p);
    printPerson2(p);
    printPerson3(p);

    return 0;
} 