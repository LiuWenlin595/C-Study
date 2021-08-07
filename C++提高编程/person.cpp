#include <iostream>
#include "person.h"
using namespace std;

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