/*6.16.12. �������������������У�
1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ��
1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ��
��дһ����������������������е��ܺͣ�ֱ���ﵽĳ��������ʾ��������-1��˵�-1��
ż����-1��˵�1�����û�����������ָ���Ĵ��������û�����0��ֵʱ�������롣
�鿴����100�1000�10000�����ܺͣ��Ƿ���ÿ�����ж�������ĳֵ��*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int num = 0;
	int k = 0;
	double m = 0;
	double n = 0;
	double sum_m = 0;
	double sum_n = 0;
	printf("�����������\n");
	scanf("%d", &k);
	while (k > 0)
	{
		for (num = 0, m = 1.0, n = 1; num < k; num++, m++, n *= -1)
		{
			sum_m += 1.0 / m;
			sum_n += n / m;
		}
		printf("sum_m = %lf\n", sum_m);
		printf("sum_n = %lf\n", sum_n);
		
		printf("�����������\n");
		scanf("%d", &k);
		sum_m = 0;     // ���³�ʼ��
		sum_n = 0;     // ���³�ʼ��
	}
	printf("����\n");
	return 0;
}