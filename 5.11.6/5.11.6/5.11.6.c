/*5.11.6. �޸ı����ϰ5�ĳ���ʹ���ܼ���������ƽ���ͣ�������Ϊ��1��׬$1����2��׬$2��
��3��׬$9���Դ����ƣ��⿴�����ܲ�����Cû��ƽ�����������ǿ�����n*n��ʾn��ƽ����*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>                  
int main(void)            //����n��һ��׬�˶���Ǯ
{
	int count, sum;
	int n;
	printf("������������");
	scanf("%d", &count);
	sum = 0;
	n = count;
	while (count > 0)
	{
		sum = sum + count * count;
		count--;
	}
	printf("%d��һ��׬��$%d\n", n, sum);
	return 0;
}