#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm> // 标准算法头文件

class Person {
public:
    Person(string name, int age) {
        this->m_Name = name;
        this->m_Age = age;
    }

    string m_Name;
    int m_Age;
};

void myPrint(int val) {
    cout << val << endl;
}

// vector容器存放内置数据类型
int main()
{
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    Person p5("eee", 50);

    // 存放自定义数据类型
    vector<Person> v1;

    // 向容器中插入数据
    v1.push_back(p1);
    v1.push_back(p2);
    v1.push_back(p3);
    v1.push_back(p4);
    v1.push_back(p5);

    // 遍历, 明确it是Person类型的指针
    for(vector<Person>::iterator it = v1.begin(); it != v1.end(); it++) {
        cout << (*it).m_Name << " " << (*it).m_Age << endl;
        cout << it->m_Name << " " << it->m_Age << endl;
    }

    // 存放自定义数据类型的指针
    vector<Person*> v2;

    v2.push_back(&p1);
    v2.push_back(&p2);
    v2.push_back(&p3);
    v2.push_back(&p4);
    v2.push_back(&p5);

    // 遍历, 明确it是Person类型的指针的指针
    for(vector<Person*>::iterator it = v2.begin(); it != v2.end(); it++) {
        cout << (**it).m_Name << " " << (**it).m_Age << endl;
        cout << (*it)->m_Name << " " << (*it)->m_Age << endl;
    }

    return 0; 
} 