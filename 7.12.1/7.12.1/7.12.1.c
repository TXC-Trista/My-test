/*7.12.1. ��дһ�����򣬶���#�ַ�ֹͣ��Ȼ�󱨸��ȡ�Ŀո��������з��������������ַ���������*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char ch;
	int i = 0;   //�ո���
	int n = 0;   //���з���
	int k = 0;   //�����ַ���
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			i++;
		else if (ch == '\n')
			n++;
		else
			k++;
	}
	printf("�ո�����%d�����з�����%d�������ַ�����%d", i, n, k);
	return 0;
}