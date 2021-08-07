#include <iostream>
using namespace std;
#include <fstream>

// ����ԭ��: istream&.read(char* buffer, int len);

class Person
{
public:
	char name[64];
	int age;
};

int main()
{
	// 1. ����ͷ�ļ�: #include <fstream>
	// 2. ����������: ifstream ifs;
	ifstream ifs;

	// 3. ���ļ�: ifs.open("�ļ�·��", �򿪷�ʽ);
	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return 0;
	}

	// 4. ������: istream&.read(char* buffer, int len)
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << p.name << " " << p.age << endl;

	// 5. �ر��ļ�: ifs.close();
	ifs.close();

	system("pause");
	return 0;
}