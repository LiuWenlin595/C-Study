#include <iostream>
using namespace std;
#include <string>

class Person
{
public:
	// 类属性 和 形参的命名 不可以相同 (python可以)
	void set_name(string n)
	{
		name = n;
	}

	void set_age(int a)
	{
		if (a < 0 || a > 150)
		{
			cout << "年龄不对, 已重置为0" << endl;
			age = 0;
		}
		else {
			age = a;
		}
	}

	string get_name()
	{
		return name;
	}

	int get_age()
	{
		return age;
	}

	void set_lover(string lover)
	{
		lover = lover;
	}	

private:
	// 姓名 可读可写
	string name;
	// 年龄 可读可写
	int age;
	// 情人 只写
	string lover;
};

int main()
{
	// 成员属性私有化
	// 优点1: 将所有成员属性设置为私有, 可以自己控制读写权限
	// 优点2: 对于写权限, 我们可以检测数据的有效性
	Person p;
	p.set_name("p1");
	cout << p.get_name() << endl;
	p.set_age(500);
	cout << p.get_age() << endl;
	p.set_age(18);
	cout << p.get_age() << endl;

	p.set_lover("haha");
	// cout << p.lover << endl;  // 报错, 没有可读的方法

	system("pause");
	return 0;
}