/*7.12.6. ��д����������룬����#ֹͣ������ei���ֵĴ�����
ע�⣺�ó���Ҫ��¼ǰһ���ַ��͵�ǰ�ַ�����"Receive your eieio award"���������������ԡ�*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define STOP '#'
int main(void)
{
	char ch;          //��ǰ�ַ�
	char pre_ch = 0;      //ǰһ���ַ�
	int n = 0;        //����
	while ((ch = getchar()) != '#')
	{
		//if ((ch == 'i') && (pre_ch == 'e'))    //����д������
		if((pre_ch == 'e') && (ch == 'i'))    
		{
			n++;
		}
		pre_ch = ch;
	}
	printf("ei���ֵĴ�����%d\n", n);
	return 0;
}