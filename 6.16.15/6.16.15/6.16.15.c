/*6.16.15. ��дһ�����򣬶�ȡһ�����룬Ȼ�����������ݵ����ӡ���������԰����봢����char���͵������У�
����ÿ���ַ�������255������һ�£�����%cת��˵����scanf()����һ��ֻ�ܴ������ж�ȡһ���ַ����������û�����
Enter��ʱscanf()����������һ�����з�(\n)��*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define SIZE 255
int main(void)
{
	char ch[SIZE];
	int t, x;
	gets(ch);        //��ȡһ����
	t = strlen(ch);  //��ȡһ���е��ַ���
	for (x = t -1; x >= 0; x--)   //�����ַ����±��� �ַ���-1
	{
		//printf("%d %c\n", x, ch[x]);   //���Բ����±��Ӧ���ַ�
		printf("%c", ch[x]);
	}	
	printf("\n");
	return 0;
}