#include <iostream>
using namespace std;

// 菱形继承: Base类中有age属性, Son1继承一份, Son2继承一份, GrandSon应该调用Base的哪一份属性?
// 当然, 如果Son1和Son2又自己定义了age, 那就变成了多继承问题, 参考 51-多继承

class Base
{
public:
	Base()
	{
		age = 100;
	}

	int age;
};

// 利用 虚继承 解决 菱形继承 的问题
// 被virtual修饰的类(Base) 称为 虚基类
class Son1: virtual public Base {};

class Son2 : virtual public Base {};

class GrandSon : public Son1, public Son2 {};


int main()
{
	GrandSon gs = GrandSon();
	// 包括 继承Son1的vbptr, 继承Son2的vbptr, 还有自己的age
	cout << sizeof(gs) << endl;
	// 类似于覆盖, 三个age属性 实际指向 同一个地址的数据
	gs.Son1::age = 0; 
	gs.Son2::age = 1;
	cout << gs.age << endl;
	cout << gs.Son1::age << endl;
	cout << gs.Son2::age << endl;

	// 采用 47-继承中的对象模型 中的可视化方法来查看对象成员分布
	// vbptr (=== virtual base pointer) 指向 vbtable (=== virtual base tables)
	// vbtable 记录属性的偏移量, 通过vbptr可以访问vbtable得到偏移量
	// vbptr当前地址 + 偏移量 = 唯一的age数据的地址

	system("pause");
	return 0;
}