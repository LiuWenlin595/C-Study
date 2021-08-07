#include <iostream>
using namespace std;

// 语法: template声明创建模板, typename表示其后面的符号是一种数据类型
// 声明一个模板, 告诉编译器后面代码中紧跟着的T不要报错, T是一个通用数据类型
template<typename T>

void mySwap(T& a, T& b) 
{
    T tmp = a;
    a = b;
    b = tmp;
}

// 对于不同的数据类型, 重复写函数很麻烦
void swapInt(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a = 10;
    int b = 20;
    // swapInt(a, b);
    // 利用函数模板交换
    // 1. 自动类型推导
    mySwap(a, b);
    cout << a << " " << b << endl;
    // 2. 显式指定类型
    mySwap<int>(a, b);
    cout << a << " " << b << endl;

    return 0;
} 