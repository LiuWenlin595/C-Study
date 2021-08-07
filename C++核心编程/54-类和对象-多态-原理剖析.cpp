#include <iostream>
using namespace std;

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

class Cat : public Animal
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

void test(Animal& a)
{
	a.laugh();  // 没写虚函数, 地址早绑定
	a.speak();  // 写了虚函数, 地址晚绑定
}

int main()
{
	Animal a = Animal();
	Cat c = Cat();
	test(c);

	// 采用 47-继承中的对象模型 中的可视化方法来查看对象成员分布
	// vfptr (=== virtual function pointer) 指向 vftable (=== virtual base tables)
	// vbtable 记录函数的位置, 通过vbptr可以访问vbtable得到函数代码的起点
	
	// 不加virtual的话, Animal是一个空对象
	// 加了virtual, Animal存了一个指向虚函数的vfptr指针
	// 然后Cat类继承了这个指针, 指针指向的地址不变, 但是函数进行了重写
	// 也即是vftable里本来存的Animal::speak() 被覆盖为 Cat::speak()
	// 因此在test里调用Animal& a.speak(), vfptr实际指向的是 Cat::speak()
	cout << sizeof(a) << " " << sizeof(c) << endl;

	system("pause");
	return 0;
}