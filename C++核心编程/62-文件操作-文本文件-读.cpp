#include <iostream>
using namespace std;
#include <fstream>
#include <string>

// ���ļ�����
// 1. ����ͷ�ļ�: #include <fstream>
// 2. ����������: ifstream ifs;
// 3. ���ļ�: ifs.open("�ļ�·��", �򿪷�ʽ);
// 4. ������: ���ַ�ʽ��ȡ
// 5. �ر��ļ�: ifs.close();

int main()
{
	// 1. ����ͷ�ļ�: #include <fstream>
	// 2. ����������: ifstream ifs;
	ifstream ifs;

	// 3. ���ļ�: ifs.open("�ļ�·��", �򿪷�ʽ);
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return 0;
	}

	// 4. ������ (ǰ��������һ��һ�ж�, ���һ����һ���ַ�һ���ַ���, ���Ƕ��Ľ������һ����)
	// ��һ��
	/*char buf[1024] = { 0 };
	while (ifs >> buf) 
	{
		cout << buf << endl;
	}*/

	//// �ڶ��� 
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/

	// ������
	/*string buf;
	while (getline(ifs, buf))
	{ 
		cout << buf << endl;
	}*/

	// ������
	char c;
	while ((c = ifs.get()) != EOF)   // EOF === end of file
	{
		cout << c;
	}

	// 5. �ر��ļ�: ifs.close();
	ifs.close();

	system("pause");
	return 0;
}