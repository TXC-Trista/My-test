/*2.12.3. 编写一个程序把你的年龄转换成天数，并显示这个两个值。
这里不用考虑闰年的问题。*/

#include<stdio.h>
int main(void)
{
	int years;
	int days;
	years = 31;
	days = 31 * years;

	printf("年龄%d岁是%d天\n", years, days);
	return 0;
}