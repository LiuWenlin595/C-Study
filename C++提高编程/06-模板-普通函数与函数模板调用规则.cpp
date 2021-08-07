#include <iostream>
using namespace std;

// 普通函数与函数模板调用规则(发生重载的情况)
// 1. 如果函数模板和普通函数都可以实现, 优先调用普通函数, 即使普通函数只有声明也会调用普通函数然后报错
// 2. 可以通过空模板参数列表来强制调用函数模板
// 3. 函数模板也可以发生重载
// 4. 如果函数模板可以产生更好的匹配, 优先调用函数模板
// 既然提供了函数模板, 最好不要使用普通函数

int myPrint(int a, int b)
{
    cout << "调用的普通函数" << endl;
    return 0;
}

template<typename T>
T myPrint(T a, T b) 
{
    cout << "调用的函数模板" << endl;
    return 0;
}

template<typename T>
T myPrint(T a, T b, T c) 
{
    cout << "调用的函数模板的重载" << endl;
    return 0;
}

int main()
{
    // 函数模板注意事项
    int a = 10;
    int b = 20;
    int c = 30;
    // 1. 如果函数模板和普通函数都可以实现, 优先调用普通函数, 即使普通函数只有声明也会调用普通函数然后报错
    myPrint(a, b);
    // 2. 可以通过空模板参数列表来强制调用函数模板
    myPrint<>(a, b);
    // 3. 函数模板也可以发生重载
    myPrint(a, b, c);
    // 4. 如果函数模板可以产生更好的匹配, 优先调用函数模板
    // 调用普通函数需要做隐式类型转换, 而函数模板可以直接指定T为char, 所以函数模板是一个更好的匹配
    char c1 = 'a';
    char c2 = 'b';
    myPrint(c1, c2);

    return 0;
} 