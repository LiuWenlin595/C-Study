#include <iostream>
#include <string>
using namespace std;

// 1. 当子类继承的父类是一个类模板时, 子类在声明的时候, 要指定出父类中T的类型
// 2. 如果不指定, 编译器无法给子类分配内存
// 3. 如果想灵活指定出父类中T的类型, 子类也需变为类模板

template<class T>
class Base {
    T m;
};

// 1. 当子类继承的父类是一个类模板时, 子类在声明的时候, 要指定出父类中T的类型
// class Son:public Base {  // 报错, 因为不知道T的类型, 无法分配内存
class Son1:public Base<int> {
};

// 3. 如果想灵活指定出父类中T的类型, 子类也需变为类模板
template<class T1, class T2>
class Son2:public Base<T2> {
public:
    Son2() {
        cout << "T1的类型为: " << typeid(T1).name() << endl;
        cout << "T2的类型为: " << typeid(T2).name() << endl;
    }
    T1 obj;
};

int main()
{
    Son1 s1;
    Son2<int, char> s2;

    return 0;
} 