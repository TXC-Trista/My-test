/*5.11.5. �޸ı����ϰaddemup.c(�����嵥5.13)���������Ϊaddemup.c�Ǽ���20����׬����Ǯ�ĳ���
�������1��׬$1����2��׬$2����3��׬$3���Դ����ƣ���
�޸ĳ���ʹ��������û������������û�����������м��㣨�����ö����һ������������20����*/
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
		sum = sum + count;
		count--;
	}
	printf("%d��һ��׬��$%d\n", n, sum);
	return 0;
}