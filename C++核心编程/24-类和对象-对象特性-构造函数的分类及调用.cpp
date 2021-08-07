#include <iostream>
using namespace std;

// 两种分类
// 按参数分类: 有参构造, 无参构造(默认构造)
// 按类型分类: 普通构造, 拷贝构造

// 三种调用方式
// 括号法, 显示法, 隐式转换法

class Person
{
public:
	Person()
	{
		cout << "无参构造函数" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "有参构造函数" << endl;
	}
	Person(const Person& p)
	{
		age = p.age;
		cout << "拷贝构造函数" << endl;
	}
	~Person()
	{
		cout << "析构函数" << endl;
	}

	int age = 0;
};

// 调用
void func()
{
	// 括号法
	Person p1;  // 默认构造函数, 括号法调用时不要加(), 显示法可以加(), new也可以加()
	Person p2(10);  // 有参构造函数
	Person p3(p2);  // 拷贝构造函数
	cout << p1.age << " " << p2.age << " " << p3.age << endl;

	// 显示法
	Person p4 = Person();
	Person p5 = Person(10);
	Person p6 = Person(p5);
	cout << p4.age << " " << p5.age << " " << p6.age << endl;
	Person(20);  // 匿名对象, 当前行执行结束后, 系统会立即回收掉匿名对象
	// 不要利用拷贝构造函数初始化匿名对象, 编译器会认为Person(p3) === Person p3, 相当于初始化名为p3的默认构造函数
	//Person(p3);  // 报错

	// 隐式转换法
	Person p7 = 10;
	Person p8 = p7;
	cout << p7.age << " " << p8.age << endl;
}

int main()
{
	func();

	system("pause");
	return 0;
}