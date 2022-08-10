/*5.11.1. 编写一个程序，把分钟表示的时间转换成小时和分钟表示的时间。
使用#define或const创建一个表示60的符号常量或const变量。
通过while循环让用户重复输入值，直到用户输入小于或等于0的值才停止循环。*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define H_TO_M 60
int main(void)
{
	int min, hour, left;
	printf("请输入分钟数：");
	scanf("%d", &min);
	while (min > 0) 
	{
		hour = min / 60;
		left = min % 60;
		printf("%d分钟是%d小时%d分钟\n", min, hour, left);
		printf("请输入分钟数：");
		scanf("%d", &min);
	}
	return 0;
}
