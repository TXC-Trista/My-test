/*7.12.4. ʹ��if else ����дһ���������룬����#ֹͣ���ø�̾���滻��ţ�������
��̾���滻ԭ���ĸ�̾�ţ���󱨸���˶��ٴ��滻��*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char ch;
	char a = 0;    //ת������
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			++a;
		}
		if (ch == '!')
		{
			ch = '!!';
			++a;
		}
	}
	printf("һ��ת���ˣ�%d ��\n", a);
	return 0;
}