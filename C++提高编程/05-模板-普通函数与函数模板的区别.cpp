#include <iostream>
using namespace std;

// 普通函数与函数模板的区别
// 1. 普通函数调用时可以发生自动类型转换(隐式数据转换)
// 2. 函数模板调用时, 如果利用自动类型推导, 不会发生隐式数据类型转换
// 3. 如果利用显式指定类型的方式, 可以发生隐式类型转换


int myAdd1(int a, int b) 
{
    return a + b;
}

template<typename T>
T myAdd2(T a, T b) 
{
    return a + b;
}

int main()
{
    // 函数模板注意事项
    int a = 10;
    int b = 20;
    double c = 1.1;
    char d = 'd';
    // 1. 普通函数调用时可以发生自动类型转换(隐式数据转换)
    cout << myAdd1(a, c) << endl;
    cout << myAdd1(a, d) << endl;

    // 2. 函数模板调用时, 如果利用自动类型推导, 不会发生隐式数据类型转换
    // cout << myAdd2(a, c) << endl;  // 报错, 因为编译器无法确定T是什么类型

    // 3. 如果利用显式指定类型的方式, 可以发生隐式类型转换
    cout << myAdd2<int>(a, c) << endl;
    cout << myAdd2<int>(a, d) << endl;

    return 0;
} 