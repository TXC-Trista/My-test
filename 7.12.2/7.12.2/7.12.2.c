/*7.12.2. ��дһ�������ȡ���룬����#�ַ�ֹͣ������Ҫ��ӡÿ��������ַ��Լ���Ӧ��
ASKII�루ʮ���ƣ���ÿ�д�ӡ8�����ַ�-ASKII�롱��ϡ����飺ʹ���ַ���������ģ�����
��%����ÿ8��ѭ������ʱ��ӡһ�����з���*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char ch;
	int n = 0;   //�ַ���
	while ((ch = getchar()) != '#')
	{
		n++;
		printf("%c:%d  ", ch, ch);
		if (n % 8 == 0)
		{
			printf("\n");
		}
	}
	return 0;
}