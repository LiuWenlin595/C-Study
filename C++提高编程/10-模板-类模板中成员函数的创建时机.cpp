#include <iostream>
#include <string>
using namespace std;

// 类模板中成员函数和普通类中成员函数创建时机是有区别的
// 普通类中的成员函数一开始就可以创建
// 类模板中的成员函数在调用时才创建

class Person1 {
public:
    void showPerson1() {
        cout << "show person1" << endl;
    }
};

class Person2 {
public:
    void showPerson2() {
        cout << "show person2" << endl;
    }
};

template<class T>
class MyClass {
public:
    // 类模板中的成员函数
    // 可以编译成功, 因为类模板中的成员函数在调用时才创建, 所以不会去判断obj是否有showPerson1/2这两个函数
    void func1() {
        obj.showPerson1();
    }

    void func2() {
        obj.showPerson2();
    }

    T obj;
};

int main()
{
    MyClass<Person1> m;
    m.func1();
    // 指定模板类型为person1时, func2会在运行时报错, 因为person1没有func2的函数
    // m.func2();

    return 0;
} 