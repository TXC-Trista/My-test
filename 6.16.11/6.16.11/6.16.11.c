/*6.16.11. ��дһ�������������ж���8��������Ȼ�󰴵����ӡ��8��������*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int ch[8];
	int n;
	int x;
	printf("������8��������\n");
	for (n = 0; n < 8; n++)
	{
		scanf("%d", &ch[n]);   //��������8�����ϣ��������ֻ��ȡ8��
	}
	
	printf("ȷ�϶�ȡ8��������\n");
	for (n = 0; n < 8; n++)
	{
		printf("%d ", ch[n]);
	}
	printf("\n");
	
	printf("����Ϊ��\n");
	for (x = 7; x >= 0; x--)
	{
		printf("%d ", ch[x]);
	}
	printf("\n");
	return 0;
}