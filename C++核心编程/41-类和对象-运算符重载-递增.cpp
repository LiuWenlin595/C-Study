#include <iostream>
using namespace std;

// 递增运算符重载作用: 实现自己的整型数据
// 往后基本都用成员函数重载, 没试过用全局函数重载会怎么样

// 自定义整型
class MyInteger
{
public:
	// 重载前置++运算符
	// 前置递增返回引用
	MyInteger& operator++()
	{
		a++;
		return *this;
	}

	// 重载后置++运算符
	// int表示占位参数, 可以区分前置和后置递增
	// 后置递增需要返回一个新的MyInteger, 因为函数执行完后tmp会被释放
	MyInteger operator++(int)
	{
		// 先 记录当时结果
		MyInteger tmp = *this;
		// 后 递增
		a++;
		// 返回的并不是*this本身, 而是另一个MyInteger
		return tmp;
	}
	int a = 10;
};

ostream& operator<<(ostream& cout, MyInteger& my_int)
{
	cout << my_int.a ;
	return cout;
}

int main()
{
	MyInteger my_int = MyInteger();
	MyInteger tmp = my_int++;
	cout << tmp << endl;
	// 需要写成上面的形式, 直接这样写会报错
	// 因为直接写的话生成的是匿名对象, 没有对应的调用入口, 因此也没有办法通过引用起别名
	// 在执行完++操作后, 系统会立即回收掉匿名对象
	// 如果想代码通过的话, 需要把参数的MyInteger& 改为 MyInteger, 把匿名对象传进来
	// cout << my_int++ << endl;

	cout << my_int << endl;
	cout << ++my_int << endl;

	system("pause");
	return 0;
}