//打印1000-2000年之间的闰年
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//判断是不是闰年的方法
		//1.被4整除，不能被100整除是闰年
		//2.能被400整除是闰年
		//if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		/*if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				printf("%d\n", year);
				count++;
			}
		}*/
		if ((year % 4 == 0) && (year % 100 != 0))
		{
			printf("%d\n", year);
			count++;
		}
		if (year % 400 == 0)
		{
			printf("%d\n", year);
			count++;
		}
	}
	printf("count = %d ", count);
	return 0;
}