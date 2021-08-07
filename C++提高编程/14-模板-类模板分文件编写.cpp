#include <iostream>
using namespace std;
#include <string>
// 解决方式1: 直接包含.cpp 源文件, .cpp中又包含了.h, 所以可以正常调用
// #include "person.cpp"
// 解决方式2: 将声明和实现写到同一个文件中, 并更改后缀名为.hpp
#include "person.hpp"

// 问题: 类模板中成员函数创建时机是在调用阶段(10-模板), 导致分文件编写时导入头文件链接不到函数的实现
// 解决方式1: 直接包含.cpp 源文件
// 解决方式2: 将声明和实现写到同一个文件中, 并更改后缀名为.hpp, hpp是约定的名称, 并不是强制

int main()
{
    Person<string, int> p("Tom", 10);
    p.showPerson();

    return 0;
} 