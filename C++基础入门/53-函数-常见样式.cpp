#include <iostream>
using namespace std;

// 函数的常见样式
// 1. 无参无返
void test1() {
	cout << "nothing" << endl;
}
// 2. 有参无返
void test2(int a) {
	cout << a << endl;
}
// 3. 无参有返
int test3() {
	return 3;
}
// 4. 有参有返
int test4(int a) {
	return a;
}

int main()
{
	test1();
	test2(2);
	cout << test3() << endl;
	cout << test4(4) << endl;

	system("pause");
	return 0;
}