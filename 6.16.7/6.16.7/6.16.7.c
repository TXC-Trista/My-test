/*6.16.7. ��дһ�������һ�����ʶ���һ���ַ������У�Ȼ�����ӡ������ʡ�
��ʾ��strlen()��������4�½��ܹ��������ڼ����������һ���ַ����±ꡣ*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main(void)
{
	char ch[50];
	int x = 0;
	int y = 0;
	printf("������һ�����ʣ�");
	scanf("%s", ch);
	y = strlen(ch);  //strlen(ch) �Ƕ�ȡ���ַ����ĳ���
	
	printf("�����ǣ�");
	for (x = y - 1; x >= 0; x--)  //�ַ�������-1�������ַ������һ����ĸ���±�
	{
		printf("%c", ch[x]);
	}
	printf("\n");
	return 0;
}