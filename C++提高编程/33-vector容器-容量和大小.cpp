#include <iostream>
using namespace std;
#include <string>
#include <vector>

// vector容量和大小
// empty(); //判断容器是否为空
// capacity(); //容器的容量
// size(); //返回容器中元素的个数
// resize(int num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除
// resize(int num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除

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

    if (v1.empty()) {
        cout << "v1为空" << endl;
    } else {
        cout << "v1不为空" << endl;
        cout << "v1的容量为: " << v1.capacity() << endl;
        cout << "v1的大小为: " << v1.size() << endl;
    }

    // 重新指定大小
    v1.resize(13);
    printVector(v1);

    v1.resize(18, 100);
    printVector(v1);

    v1.resize(5);
    printVector(v1);

    return 0; 
}  