/*6.16.8. 编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数乘积的结果。
在用户输入非数字之前，程序应循环处理用户输入的每对值。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	float x, y;
	printf("请输入两个浮点数：\n");
	while (scanf("%f %f", &x, &y) == 2)
	{
		printf("%f\n", (x - y) / (x * y));
	}
	printf("输入非数字，结束循环\n");
	return 0;
}