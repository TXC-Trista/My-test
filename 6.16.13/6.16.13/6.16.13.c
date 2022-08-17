/*6.16.13. 编写一个程序，创建一个包含8个元素的int类型数组，分别把数组元素设置为2的前8次幂。
使用for循环设置数组元素的值，使用do while循环显示数组元素的值。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define SIZE 8    //把8设置为常量，这样以后可以调整元素个数很方便
int main(void)
{
	int i = 0;
	int digit[SIZE];
	int sum = 1;
	for (i = 0; i < SIZE; i++)
	{
		digit[i] = sum;
		sum *= 2;    //2的n次方，就是n个2相乘
	}
	i = 0;
	do
	{
		printf("第 %d 个元素的值是：%d\n", i, digit[i]);
		i++;
	} while (i < 8);
	return 0;
}