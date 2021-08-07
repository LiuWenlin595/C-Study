#include <iostream>
using namespace std;

template<typename T>
void mySwap(T& a, T& b) 
{
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
void test2()
{
    cout << "can run" << endl;
}

int main()
{
    // 函数模板注意事项
    int a = 10;
    int b = 20;
    double c = 1.1;
    // 1. 自动类型推导, 必须推导出一致的数据类型T才可以使用
    // mySwap(a, c);  // 数据类型不一致
    mySwap(a, b);
    cout << a << " " << b << endl;

    // 2. 模板必须要确定出T的数据类型, 才可以使用
    // test2();  // 报错, 使用了模板但是不能确定模板的数据类型
    test2<int>();

    return 0;
} 