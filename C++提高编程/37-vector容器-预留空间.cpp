#include <iostream>
using namespace std;
#include <vector>

// vector预留空间  (不是reverse!)
// reserve(int len)  // 容器预留len个元素长度，预留位置不初始化，元素不可访问。

void printVector(vector<int>& v) {
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    // 预留空间, 避免反复的开辟新空间, 如果注释掉的话num是一个比较大的数
    v.reserve(100000);

    int num = 0;  // 统计开辟次数
    int* p = NULL;
    for (int i = 0; i < 100000; i++) {
        v.push_back(i);

        if (p != &v[0]) {
            p = &v[0];
            num++;
        }
    }

    cout << num << endl;

    return 0; 
}  