#include <iostream>
using namespace std;

// ����: Ĭ�ϵķ���Ȩ�޲�ͬ
// structĬ��Ȩ��Ϊ����public, classĬ��Ȩ��Ϊ˽��private

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
	//c1.a = 100;  // ����, classĬ��Ȩ��Ϊ˽��, ���ɷ���
	c2.a = 100;  // structĬ��Ȩ��Ϊ����, ���Է��� 

	system("pause");
	return 0;
}