#include <iostream>
using namespace std;
#include <string>

// 多态使用时, 如果子类有属性开辟到堆区, 那么父类指针在释放时无法调用到子类的析构代码
// 解决方式: 将父类的析构函数改为虚析构或纯虚析构

class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数调用" << endl;
	}
	
	virtual void speak() = 0;
	
	// 虚析构 和 纯虚析构, 二选一
	virtual ~Animal()
	{
		cout << "Animal析构函数调用" << endl;
	}

	// 纯虚析构函数既需要有声明也需要有实现, 因为父类也可能有堆数据需要释放
	// 使用纯虚析构后, 该类属于抽象类, 不可实例化
	//virtual ~Animal() = 0;
};

//Animal::~Animal()
//{
//	cout << "Animal纯虚析构函数" << endl;
//}


class Cat : public Animal
{
public:
	Cat(string name)
	{
		this->name = new string(name);
		cout << "小猫构造函数调用" << endl;
	}
	virtual void speak()
	{
		cout << *name << "小猫在说话" << endl;
	};
	~Cat()
	{
		if (name != NULL)
		{
			delete name;
			name = NULL;	
		}
		cout << "Cat析构函数调用" << endl;
	}

	string* name;
};

int main()
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	// 如果不写成虚析构形式的话, delete父类指针的时候并不会去调用子类的析构, 
	// 如果子类有堆数据的话就会造成内存泄漏 (把~Animal改为普通析构即可验证)
	delete animal;

	system("pause");
	return 0;
}