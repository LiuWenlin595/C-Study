#include <iostream>
using namespace std;

// 区别: 默认的访问权限不同
// struct默认权限为公共public, class默认权限为私有private

class C1
{
	int a;
};

struct C2
{
	int a;
};

int main()
{
	C1 c1;
	C2 c2;
	//c1.a = 100;  // 报错, class默认权限为私有, 不可访问
	c2.a = 100;  // struct默认权限为公共, 可以访问 

	system("pause");
	return 0;
}