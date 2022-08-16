/*6.16.6. 编写一个程序打印一个表格，每一行打印一个整数、该数的平方、该数的立方。
要求用户输入表格的上下限。使用一个for循环。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int n = 0;
	int x = 0;
	int y = 0;  
	int temp = 0;
	printf("请输入表格的下限和上限：\n");
	scanf("%d %d", &x, &y);
	if (x > y)     //此条件语句是为了确保x是下限，y是上限
	{
		temp = x;
		x = y;
		y = temp;
	}
	printf("       整数      平方      立方\n");
	for (n = x; ((n >= x) && (n <= y)); n++)
		printf("%10d %10d %10d\n", n, n * n, n * n * n);
	return 0;
}