#include <iostream>
using namespace std;
#include <deque>

// vector和deque的区别:
// vector对于头部的插入删除效率低，数据量越大，效率越低
// deque相对而言，对头部的插入删除速度回比vector快
// vector访问元素时的速度会比deque快,这和两者内部实现有关
// 通过中控器维护, 外表看起来像一块连续的内存空间, 其实并不是, 因此插入快访问慢

// deque容器构造函数:
// deque<T> deqT;           //默认构造形式
// deque(beg, end);         //构造函数将[beg, end)区间中的元素拷贝给本身。
// deque(n, elem);          //构造函数将n个elem拷贝给本身。
// deque(const deque &deq); //拷贝构造函数

// 通过const修饰容器和容器的迭代器, 保证容器只读
void printDeque(const deque<int>& d) {
    for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    deque<int> d1;
    for(int i = 0; i < 10; i++) {
        d1.push_back(i);
    }
    printDeque(d1);

    deque<int> d2(d1.begin(), d1.end());
    printDeque(d2);

    deque<int> d3(10, 100);
    printDeque(d3);

    deque<int> d4(d3);
    printDeque(d4);

    return 0; 
}  