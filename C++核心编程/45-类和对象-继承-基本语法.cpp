#include <iostream>
using namespace std;

// 继承的好处: 减少重复代码
// 语法: class 子类: 继承方式 父类
// 子类也称派生类, 父类也称基类
// 子类成员分为两部分: 一部分从父类继承过来的, 另一部分是自己新增的
// 父类继承过来的表现其共性, 新增的成员体现其个性

// 公共页面类
class BasePage
{
public:
	void base()
	{
		cout << "base" << endl;
	}
};

class Java: public BasePage
{
public:
	void content()
	{
		cout << "java content" << endl;
	}
};

class Python: public BasePage
{
public:
	void content()
	{
		cout << "python content" << endl;
	}
};

int main()
{
	Java j = Java();
	Python p = Python();
	j.content();
	j.base();
	p.content();
	p.base();

	system("pause");
	return 0;
}