#include <iostream>
using namespace std;

int main()
{
	// 浮点型
	// 1. 单精度 float
	// 2. 双精度 double

	//如果不加f, 编译器会默认为double, double->float需要额外做一步转化
	//加了f, 编译器会将其视为float
	float f1 = 3.14f;

	//默认情况下, 会输出六位有效数字
	double d1 = 3.1415926535;

	//科学计数法
	float f2 = 3e2f;
	float f3 = 3e-2f;

	cout << f1 << " " << d1 << " " << f2 << " " << f3 << endl;

	system("pause");
	return 0;
}