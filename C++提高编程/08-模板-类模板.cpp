#include <iostream>
#include <string>
using namespace std;

// 类模板一般用class, 函数模板一般用typename
template<class NameType, class AgeType>
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

    Person<string, int> p1("Tom", 10);
    p1.showPerson();

    return 0;
} 