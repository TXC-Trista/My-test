/*6.16.6. ��дһ�������ӡһ�����ÿһ�д�ӡһ��������������ƽ����������������
Ҫ���û�������������ޡ�ʹ��һ��forѭ����*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int n = 0;
	int x = 0;
	int y = 0;  
	int temp = 0;
	printf("������������޺����ޣ�\n");
	scanf("%d %d", &x, &y);
	if (x > y)     //�����������Ϊ��ȷ��x�����ޣ�y������
	{
		temp = x;
		x = y;
		y = temp;
	}
	printf("       ����      ƽ��      ����\n");
	for (n = x; ((n >= x) && (n <= y)); n++)
		printf("%10d %10d %10d\n", n, n * n, n * n * n);
	return 0;
}