/*5.11.6. 修改编程练习5的程序，使其能计算整数的平方和（可以认为第1天赚$1、第2天赚$2、
第3天赚$9，以此类推，这看起来很不错）。C没有平方函数，但是可以用n*n表示n的平方。*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>                  
int main(void)            //计算n天一共赚了多少钱
{
	int count, sum;
	int n;
	printf("请输入天数：");
	scanf("%d", &count);
	sum = 0;
	n = count;
	while (count > 0)
	{
		sum = sum + count * count;
		count--;
	}
	printf("%d天一共赚了$%d\n", n, sum);
	return 0;
}