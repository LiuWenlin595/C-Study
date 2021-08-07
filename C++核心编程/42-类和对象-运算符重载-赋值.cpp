#include <iostream>
using namespace std;

// C++编译器至少给一个类添加四个函数
// 1. 默认构造函数
// 2. 默认析构函数
// 3. 默认拷贝构造函数 (对属性进行值拷贝)
// 4. 赋值运算符 operator= (对属性进行值拷贝)

class Person
{
public:
	Person(int age)
	{
		this->age = new int(age);
	}

	~Person()
	{
		if (age != NULL)
		{
			delete age;
			age = NULL;
		}
	}

	// 同样的, 为了满足链式操作, 这里的返回值也需要是一个Person&
	Person& operator= (Person& p)
	{
		// 先判断属性是否在堆区, 如果在堆区需要先是放干净, 然后深拷贝
		if (age != NULL)
		{
			delete age;
			age = NULL;
		}
		this->age = new int(*p.age);
		return *this;
	}

	int* age;
};

void test()
{
	Person p1 = Person(10);
	Person p2 = Person(20);
	Person p3 = Person(30);
	cout << *p1.age << " " << *p2.age << " " << *p3.age << endl;
	// 如果不重载赋值运算符就会报错, 因为释放内存的时候, new int(10)被重复释放了三次
	p3 = p2 = p1;
	cout << *p1.age << " " << *p2.age << " " << *p3.age << endl;
}

int main()
{
	test();

	system("pause");
	return 0;
}