#include <iostream>
using namespace std;

// 构造函数: 在创建对象时为对象的成员属性赋值, 构造函数由编译器自动调用
// 语法: 类名() {}
// 析构函数: 在对象销毁前系统自动调用, 执行一些清理操作
// 语法: ~类名() {}

class Person
{
public:
	// 构造函数
	// 1. 没有返回值, 不用写void
	// 2. 函数名与类名相同
	// 3. 构造函数可以有参数, 可以发生重载
	// 4. 创建对象时, 构造函数会自动调用, 且只调用一次
	Person()
	{
		cout << "构造函数" << endl;
	}

	// 析构函数
	// 1. 没有返回值, 不用写void
	// 2. 函数名与类名相同, 在名称前加~
	// 3. 构造函数不可以有参数, 不可以发生重载
	// 4. 对象在销毁前, 会自动调用析构函数, 且只调用一次
	~Person()
	{
		cout << "析构函数" << endl;
	}
};

// 构造和析构都是必须有的实现, 如果不提供的话, 编译器会提供一个空的实现
void func()
{
	// 栈上的数据, 执行完后会释放
	Person p;
}

int main()
{
	func();

	// 堆上的数据, main函数执行完会释放
	Person p;

	system("pause");
	return 0;
}