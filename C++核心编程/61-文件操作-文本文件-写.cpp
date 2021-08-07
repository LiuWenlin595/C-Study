#include <iostream>
using namespace std;
#include <fstream>

// �������в��������ݶ�������ʱ����, ���������н�����ͻᱻ�ͷ�
// ͨ���ļ����Խ����ݳ־û�
// ���ļ�������Ҫ����ͷ�ļ�<fstream>

// д�ļ�����
// 1. ����ͷ�ļ�: #include <fstream>
// 2. ����������: ofstream ofs;
// 3. ���ļ�: ofs.open("�ļ�·��", �򿪷�ʽ);
// 4. д����: ofs << "д�������";
// 5. �ر��ļ�: ofs.close();

// �򿪷�ʽ
// 1. ios::in, Ϊ���ļ������ļ�
// 2. ios::ous, Ϊд�ļ������ļ� 
// 3. ios::ate, ��ʼ�ļ�����Ϊ�ļ�β (Ӧ����д��֮���ٴ�, ����ֱ�ӵ�ĩβ, ����������ֿ�)
// 4. ios::app, ��׷�ӷ�ʽд�ļ�
// 5. ios::trunc, ����ļ�������ɾ��, �ٴ���
// 6. ios::binary, �����Ʒ�ʽ
// �ļ��򿪷�ʽ������|���������ʹ��

int main()
{
	// 1. ����ͷ�ļ�: #include <fstream>
	// 2. ����������: ofstream ofs;
	ofstream ofs;

	// 3. ���ļ�: ofs.open("�ļ�·��", �򿪷�ʽ);
	ofs.open("test.txt", ios::out);

	// 4. д����: ofs << "д�������";
	ofs << "����д�ļ�" << endl;

	// 5. �ر��ļ�: ofs.close();
	ofs.close();

	system("pause");
	return 0;
}