/*3.11.7. 1Ӣ���൱��2.54���ס���дһ��������ʾ�û�������ߣ�/Ӣ�磩��Ȼ��������Ϊ��λ��ʾ��ߡ�*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	float inch;
	printf("�������������(Ӣ��)��");
	scanf("%f", &inch);
	printf("�������Ϊ%.2f����\n", inch * 2.54);
	return 0;
}