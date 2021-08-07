#include <iostream>
using namespace std;

// 堆区: 由程序员分配和释放, 若程序员不释放, 程序结束后由操作系统回收
// 只要不是存放在栈区的数据都存放在堆区, 比如new的数据, 比如指针
int* func()
{
	// 利用new关键字, 将数据开辟到堆区
	// 指针是局部变量, 放在栈区; 指针保存的数据是new出来的, 放在堆区
	int* p = new int(10);
	return p;
}

int main()
{
	// 指针p指向的地址数据不会被释放, 除非程序员操作
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}