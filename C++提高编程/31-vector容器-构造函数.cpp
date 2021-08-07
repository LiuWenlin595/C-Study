#include <iostream>
using namespace std;
#include <string>
#include <vector>

// vector单端数组, 可以动态扩展
// 扩展时不是在原有空间的后面扩展, 因为不能保证后面的空间有没有其他程序在用
// 而是直接找一块更大的空间, 然后将原数据拷贝新空间, 释放原空间
// vector容器的迭代器是支持随机访问的迭代器, 一次+3+4

// vector构造函数
// vector<T> v;                 //采用模板实现类实现，默认构造函数
// vector(v.begin(), v.end());  //将v[begin(), end())区间中的元素拷贝给本身。
// vector(n, elem);             //构造函数将n个elem拷贝给本身。
// vector(const vector &vec);   //拷贝构造函数。

void printVector(vector<int>& v) {
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v1;  // 默认构造函数
    for(int i = 0; i < 10; i++) {
        v1.push_back(i);
    }   
    printVector(v1);

    vector<int> v2(v1.begin(), v1.end());
    printVector(v2);

    vector<int> v3(10, 100);
    printVector(v3);

    vector<int> v4(v1);
    printVector(v4);

    return 0; 
}  