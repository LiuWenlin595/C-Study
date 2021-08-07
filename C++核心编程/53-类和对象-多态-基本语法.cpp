#include <iostream>
using namespace std;

// 静态多态: 函数重载, 运算符重载
// 特点: 编译阶段确定函数地址
// 动态多态: 派生类 和 虚函数 实现的 运行时多态
// 特点: 运行阶段确定函数地址

// 动态多态满足条件:
// 1. 有继承关系
// 2. 子类重写父类的虚函数 (重写: 返回值类型 函数名 函数列表 完全相同)

// 动态多态的使用:
// 父类的指针或引用 执行 子类对象

class Animal
{
public:
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
	void laugh()
	{
		cout << "动物在笑" << endl;
	}
};

class Cat: public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
	void laugh()
	{
		cout << "小猫在笑" << endl;
	}
};

// 地址早绑定, 在编译阶段就确定了函数的地址, 不管传什么动物都会用Animal调用speak函数
// 想要让小猫说话, 需要将父类设为虚函数, 且子类重写父类的虚函数
// 这样的话地址就会在运行时绑定, 也即 地址晚绑定 
// 形参相当于Animal& a = c;
void test(Animal& a)
{
	a.laugh();  // 没写虚函数, 地址早绑定
	a.speak();  // 写了虚函数, 地址晚绑定
}

int main()
{
	Cat c = Cat();
	test(c);

	system("pause");
	return 0;
}