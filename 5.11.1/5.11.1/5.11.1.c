/*5.11.1. ��дһ�����򣬰ѷ��ӱ�ʾ��ʱ��ת����Сʱ�ͷ��ӱ�ʾ��ʱ�䡣
ʹ��#define��const����һ����ʾ60�ķ��ų�����const������
ͨ��whileѭ�����û��ظ�����ֵ��ֱ���û�����С�ڻ����0��ֵ��ֹͣѭ����*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define H_TO_M 60
int main(void)
{
	int min, hour, left;
	printf("�������������");
	scanf("%d", &min);
	while (min > 0) 
	{
		hour = min / 60;
		left = min % 60;
		printf("%d������%dСʱ%d����\n", min, hour, left);
		printf("�������������");
		scanf("%d", &min);
	}
	return 0;
}
