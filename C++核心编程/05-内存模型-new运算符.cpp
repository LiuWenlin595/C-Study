#include <iostream>
using namespace std;

// 1. new的基本语法
int* func ()
{
	// 在堆区创建整型数据
	// new返回的是该数据类型的指针
	int* p = new int(10);
	return p;
}

void test1 ()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	// 利用关键字delete释放堆区的数据
	delete p;
	// cout << *p << endl; // 报错, 内存已经释放
}

// 2. 在堆区利用new开辟数组
void test2()
{
	// 在堆区创建10整型数据的数组
	int* arr = new int[10];
	for (int i = 0; i < 10; i++) {
		// 给10个元素赋值
		arr[i] = i + 100;
	}
	// arr表示指针但是arr[i]表示数据 (好奇怪)
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl; 
	}
	// 释放数组的时候需要加[]
	delete[] arr;
}

int main()
{
	test1();
	test2();

	system("pause");
	return 0;
}