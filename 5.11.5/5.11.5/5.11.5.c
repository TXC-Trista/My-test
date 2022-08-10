/*5.11.5. 修改编程练习addemup.c(程序清单5.13)，你可以认为addemup.c是计算20天里赚多少钱的程序
（假设第1天赚$1、第2天赚$2、第3天赚$3，以此类推）。
修改程序，使其可以与用户交互，根据用户输入的数进行计算（即，用读入的一个变量来代替20）。*/
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
		sum = sum + count;
		count--;
	}
	printf("%d天一共赚了$%d\n", n, sum);
	return 0;
}