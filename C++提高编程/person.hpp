#include <iostream>
#include <string>
using namespace std;

// 将.h 和 .cpp写入一个文件中
template<class T1, class T2>
class Person {
public:
    Person(T1 name, T2 age);
    void showPerson();

    T1 m_Name;
    T2 m_Age;
};

// 构造函数的类外实现, 需要在作用域中加上尖括号体现模板的作用
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
    this->m_Name = name;
    this->m_Age = age;
}

// 成员函数的类外实现, 需要在作用域 中加上尖括号体现模板的作用
template<class T1, class T2>
void Person<T1, T2>::showPerson() {
    cout << this->m_Name << " " << this->m_Age << endl;
}