#include <iostream>
using namespace std;

// �̳еĺô�: �����ظ�����
// �﷨: class ����: �̳з�ʽ ����
// ����Ҳ��������, ����Ҳ�ƻ���
// �����Ա��Ϊ������: һ���ִӸ���̳й�����, ��һ�������Լ�������
// ����̳й����ı����乲��, �����ĳ�Ա���������

// ����ҳ����
class BasePage
{
public:
	void base()
	{
		cout << "base" << endl;
	}
};

class Java: public BasePage
{
public:
	void content()
	{
		cout << "java content" << endl;
	}
};

class Python: public BasePage
{
public:
	void content()
	{
		cout << "python content" << endl;
	}
};

int main()
{
	Java j = Java();
	Python p = Python();
	j.content();
	j.base();
	p.content();
	p.base();

	system("pause");
	return 0;
}