#include <iostream>
using namespace std;
#include <fstream>

// ����ԭ��: ostream&.write(const char* buffer, int len);

class Person
{
public:
	char name[64];
	int age;
};

int main()
{
	// 1. ����ͷ�ļ�: #include <fstream>
	// 2. ����������: ofstream ofs;
	ofstream ofs("person.txt", ios::out | ios::binary);  // ����ofstream�Ĺ��캯�����ļ�

	// 3. ���ļ�: ofs.open("�ļ�·��", �򿪷�ʽ);
	//ofs.open("test.txt", ios::out | ios::binary);

	// 4. д����: ostream&.write(const char* buffer, int len)
	Person p = { "����", 20 };
	// &p === Person*, ��Person*ǿת��char*
	ofs.write((const char*)&p, sizeof(Person));

	// 5. �ر��ļ�: ofs.close();
	ofs.close();

	system("pause");
	return 0;
}