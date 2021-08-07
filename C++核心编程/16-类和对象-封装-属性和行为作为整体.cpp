#include <iostream>
using namespace std;

// C++面向对象三大特征: 封装、继承、多态
// 封装的意义: 将属性和行为作为整体, 表示生活中的事物; 将属性和行为加以控制权限
// 语法: class 类名{访问权限: 属性 / 行为};

const double PI = 3.14;

// 设计一个圆类, 求圆的周长
class Circle
{
// 公共权限
public:
	// 属性
	int r;
	// 行为
	double cal_c()
	{
		// 返回圆的周长
		return 2 * PI * r;
	}
};

int main()
{
	// 实例化, 通过一个类创建一个对象的过程
	Circle c1;
	c1.r = 10;
	cout << c1.cal_c() << endl;
	
	system("pause");
	return 0;
}