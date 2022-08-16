/*6.16.9. 修改练习8，使用一个函数返回计算的结果。
练习8题目：编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数乘积的结果。
在用户输入非数字之前，程序应循环处理用户输入的每对值。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
float temp(float x, float y);
int main(void)
{
	float a, b, c;
	printf("请输入两个浮点数：\n");
	while (scanf("%f %f", &a, &b) == 2)  //scanf返回的是读取成功的个数
	{
		c = temp(a, b);
		printf("%f\n", c);
	}
	printf("输入非数字，结束循环\n");
	return 0;
}
float temp(float x, float y)
{
	float z;
	z = (x - y) / (x * y);
	return z;
}