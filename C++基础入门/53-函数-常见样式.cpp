#include <iostream>
using namespace std;

// �����ĳ�����ʽ
// 1. �޲��޷�
void test1() {
	cout << "nothing" << endl;
}
// 2. �в��޷�
void test2(int a) {
	cout << a << endl;
}
// 3. �޲��з�
int test3() {
	return 3;
}
// 4. �в��з�
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