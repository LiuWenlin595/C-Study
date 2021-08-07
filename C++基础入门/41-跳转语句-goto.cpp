#include <iostream>
using namespace std;

int main()
{
	// 作用: 无条件跳转语句
	// 用法: goto 标记;
	// 执行到goto语句时, 如果标记存在, 就会跳转到标记的位置
	// 不建议使用, 会造成流程混乱

	cout << 1 << endl;
	cout << 2 << endl;
	goto FLAG;
	cout << 3 << endl;
	cout << 4 << endl;
	FLAG:
	cout << 5 << endl;

	system("pause");
	return 0;
}