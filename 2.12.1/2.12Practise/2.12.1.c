/*2.12.1.c -- ��дһ�����򣬵���һ��printf()�����������������ӡ��һ�С�
�ٵ���һ��printf()����������������ֱ��ӡ�����С�Ȼ���ٵ�������printf()�����������������ӡ��һ�С�*/


#include<stdio.h> 
int main(void)
{
	printf("%s %s\n", "Trista", "Tang");
	printf("%s\n%s\n", "Trista", "Tang");
	printf("%s", "Trista");
	printf(" %s", "Tang");
	return 0;
}