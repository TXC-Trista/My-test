/*3.11.2. ��дһ������Ҫ����ʾ����һ��ASCII��ֵ���磬66����Ȼ���ӡ������ַ���*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int num;
	printf("������һ��ASCII��ֵ��");
	scanf("%d", &num);
	printf("ASCII��%d��Ӧ���ַ��ǣ�%c\n", num, num);
	return 0;
}