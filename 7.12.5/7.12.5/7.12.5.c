/*7.12.5. ��switch��д��ϰ4��*/
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
		switch (ch)
		{
		case '.':
			ch = '!';
			++a;
		case '!':
			ch = '!!';
			++a;
			break;
		default:
			break;
		}
	}
	printf("һ��ת���ˣ�%d ��\n", a);
	return 0;
}