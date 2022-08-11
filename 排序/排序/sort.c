//将三个数字 由小到大排序
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main(void)
{
	//输入
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);

	//调整顺序
	if (x > y)
	{
		int temp = x;
		x = y;
		y = temp;
	}
	if (x > z)
	{
		int temp = x;
		x = z;
		z = temp;
	}
	if (y > z)
	{
		int temp = y;
		y = z;
		z = temp;
	}

	//输出 从小到大
	printf("%d %d %d", x, y, z);
	return 0;
}