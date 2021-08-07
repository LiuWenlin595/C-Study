#include <iostream>
using namespace std;
#include <string>

// ��̬ʹ��ʱ, ������������Կ��ٵ�����, ��ô����ָ�����ͷ�ʱ�޷����õ��������������
// �����ʽ: �����������������Ϊ��������������

class Animal
{
public:
	Animal()
	{
		cout << "Animal���캯������" << endl;
	}
	
	virtual void speak() = 0;
	
	// ������ �� ��������, ��ѡһ
	virtual ~Animal()
	{
		cout << "Animal������������" << endl;
	}

	// ����������������Ҫ������Ҳ��Ҫ��ʵ��, ��Ϊ����Ҳ�����ж�������Ҫ�ͷ�
	// ʹ�ô���������, �������ڳ�����, ����ʵ����
	//virtual ~Animal() = 0;
};

//Animal::~Animal()
//{
//	cout << "Animal������������" << endl;
//}


class Cat : public Animal
{
public:
	Cat(string name)
	{
		this->name = new string(name);
		cout << "Сè���캯������" << endl;
	}
	virtual void speak()
	{
		cout << *name << "Сè��˵��" << endl;
	};
	~Cat()
	{
		if (name != NULL)
		{
			delete name;
			name = NULL;	
		}
		cout << "Cat������������" << endl;
	}

	string* name;
};

int main()
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	// �����д����������ʽ�Ļ�, delete����ָ���ʱ�򲢲���ȥ�������������, 
	// ��������ж����ݵĻ��ͻ�����ڴ�й© (��~Animal��Ϊ��ͨ����������֤)
	delete animal;

	system("pause");
	return 0;
}