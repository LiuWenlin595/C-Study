#include <iostream>
using namespace std;

// 从父类继承过来的成员, 哪些属于子类对象中?

// 可视化方法(查看子类对象成员的分布):
// vs 2017的开发人员命令提示符
// cd G:\VS2017\Project\Bilibili\Bilibili
// cl /d1 reportSingleClassLayoutSon "47 类和对象-继承-继承中的对象模型.cpp"

class Base
{
public:
	int a = 10;
protected:
	int b = 20;
private:
	int c = 30;
};

class Son : public Base
{
public:
	int d;
};

int main()
{
	Son s = Son();
	// 父类中所有非静态成员属性都会被子类继承下去
	// 父类中私有成员属性是被编译器给隐藏了, 因此访问不到, 但确实被继承下去了
	cout << sizeof(s) << endl;

	system("pause");
	return 0;
}