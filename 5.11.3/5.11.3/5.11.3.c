/*5.11.3. 编写一个程序，提示用户输入天数，然后将其转换为周数和天数。
例如，用户输入18，则转换成2周4天。以下面的格式显示结果：
18 days are 2 weeks, 4 days.
通过while循环让用户重复输入天数，当用户输入一个非正值时（如0或-20），循环结束。*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define D_TO_W 7
int main(void)
{
	int days, weeks, left;
	printf("请输入天数：");
	scanf("%d", &days);
	while (days > 0)
	{
		weeks = days / 7;
		left = days % 7;
		printf("%d day are %d weeks, %d days.\n", days, weeks, left);
		printf("请输入天数：");
		scanf("%d", &days);
	}
	return 0;
}