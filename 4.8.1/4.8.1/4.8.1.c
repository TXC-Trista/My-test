/*4.8.1. ��дһ��������ʾ�û����������գ�Ȼ���ԡ������ա��ĸ�ʽ��ӡ������*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main(void)
{
	char name[50];
	char surname[30];
	printf("��������������");
	scanf("%s", name);
	printf("�����������գ�");
	scanf("%s", surname);
	printf("%s,%s\n", name, surname);
	
	return 0;
}