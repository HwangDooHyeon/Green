#include<stdio.h>
#include<string>

using namespace std;

/* ��� ����
int main(void)
{
	char str[] = "ABCDEF";

	printf("%c\n", str[0]);
	printf("%c\n", str[1]);
	printf("%c\n", str[2]);
	printf("%c\n", str[3]);
	printf("%c\n", str[4]);
	printf("%c\n", str[5]);
	printf("%c\n", str[6]);

	printf("%s\n", str);
}
*/

/*
%s\n ���ڿ��� ���
%c\n ������ ���
*/

/*
�ƽ�Ű �ڵ��� 0���� NUL�� 32���� Space��
NUL���� ������ �������� �ʴ� �ݸ�, Space���� ������ ������
������ �� �� �������� ǥ����.
*/

/*--------------------------------------------------*/

/* ��� ����
class ��� {
	
private:
	int ����;
	int Ű;
	int �̸�;
	int �ּ�;
//�����ʹ� �����ϸ� ������� ���� (�⺻�� private)

public:
	void ������()
	{
		printf("����ȣ��");
	}
//����� ���� ������ ����
};

int main(void)
{
	��� me;

	me.������();

	return 0;
}
*/

/*
��ɰ� �����͸� ��ħ: ĸ��ȭ
��ü�� ����� ������ �� ���� ���� ����: ���
*/

/*--------------------------------------------------*/

/* ��� ����
class ��� {

private:
	char* ����;
	int Ű;
	int �̸�;
	int �ּ�;

public:
	char* Get����() { return ����; }
	void Set����(char* _jop) { ���� = _jop; }
	};

int main(void)
{
	��� me;
	me.Set����((char*)"�л�");
	printf("%s\n", me.Get����());

	me.Set����((char*)"���α׷���");
	printf("%s\n", me.Get����());

	return 0;
}
*/

