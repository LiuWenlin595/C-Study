#include <iostream>
using namespace std;
#include <vector>

// vector容器互换
// swap(vec)
// 1. 基本使用
// 2. 实际用途

void printVector(vector<int>& v) {
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }

    vector<int> v2;
    for (int i = 10; i > 0; i--) {
        v2.push_back(i);
    }

    printVector(v1);
    printVector(v2);

    v1.swap(v2);

    printVector(v1);
    printVector(v2);

    // 2. 实际用途: 收缩内存空间
    vector<int> v3;
    for (int i = 0; i < 100000; i++) {
        v3.push_back(i);
    }
    cout << "v的容量为: " << v3.capacity() << endl;
    cout << "v的大小为: " << v3.size() << endl;

    v3.resize(3);

    cout << "v的容量为: " << v3.capacity() << endl;
    cout << "v的大小为: " << v3.size() << endl;

    // 用swap收缩内存
    // 利用拷贝构造函数构造匿名对象, 匿名对象的容量和大小都为v3.size()
    // 然后利用swap进行了一次指针交换, v3的容量指向了3, 10w多的容量空间被回收
    vector<int>(v3).swap(v3);
    cout << "v的容量为: " << v3.capacity() << endl;
    cout << "v的大小为: " << v3.size() << endl;

    return 0; 
}  