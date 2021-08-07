#include <iostream>
using namespace std;

// 纯虚函数语法: virtual 返回值类型 函数名 (参数列表) = 0;
// 抽象类: 含有纯虚函数的类
// 抽象类特点: 无法实例化对象; 子类必须重写抽象类中的纯虚函数, 否则子类也是抽象类

class Base
{
public:
	virtual void func() = 0;
};

class Son : public Base
{
public:
	virtual void func() 
	{
		cout << "调用func" << endl;
	};
};

int main()
{
	// Base b = Base();  // 抽象类不能构建实例
	Son s1 = Son();
	s1.func();

 // 声明为父类的指针 指向子类的对象
	Base* s2 = new Son();
	s2->func();
 delete s2;

	system("pause");
	return 0;
}