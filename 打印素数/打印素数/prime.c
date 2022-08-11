//打印100-200之间的素数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main(void)
{
	////判断素数的方法：只能被1和它本身整除的数
	////2-(x-1)之间的数去试除x，看能不能整除
	//int x = 0;
	//int y = 0;
	//for (x = 100; x <= 200; x++)
	//{
	//	for (y = 2; y < x ; y++)
	//	{
	//		if (x % y == 0)
	//		{
	//			break;
	//		}
	//	}
	//	if (x == y)
	//	{
	//		printf("%d\n", x);
	//	}
	//}
	
	//int x = 0;
	//int y = 0;
	//int count = 0;
	//for (x = 100; x <= 200; x++)
	//{
	//	int flag = 1;  //假设x就是素数
	//	for (y = 2; y < x ; y++)
	//	{
	//		if (x % y == 0)
	//		{
	//			flag = 0;   //不是素数
	//			break;
	//		}
	//	}
	//	if (flag == 1)
	//	{
	//		printf("%d\n", x);
	//		count++;
	//	}
	//}
	//printf("\ncount = %d\n", count);

	//int x = 0;
	//int y = 0;
	//int count = 0;
	////m = a * b
	////a和b中一定至少有一个数字是 <= 开平方m的
	////比如 16 = 2*8 = 4*4
	//for (x = 100; x <= 200; x++)
	//{
	//	int flag = 1;  //假设x就是素数
	//	for (y = 2; y <= sqrt(x); y++)  //sqrt()是开平方的函数，需要头文件#include<math.h>
	//	{
	//		if (x % y == 0)
	//		{
	//			flag = 0;   //不是素数
	//			break;
	//		}
	//	}
	//	if (flag == 1)
	//	{
	//		printf("%d\n", x);
	//		count++;
	//	}
	//}
	//printf("\ncount = %d\n", count);


	//继续优化
	int x = 0;
	int y = 0;
	int count = 0;
	//m = a * b
	//a和b中一定至少有一个数字是 <= 开平方m的
	//比如 16 = 2*8 = 4*4
	for (x = 101; x <= 200; x += 2)    //从源头上把偶数跳过，数据少一半
	{
		int flag = 1;  //假设x就是素数
		for (y = 2; y <= sqrt(x); y++)  //sqrt()是开平方的函数，需要头文件#include<math.h>
		{
			if (x % y == 0)
			{
				flag = 0;   //不是素数
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d\n", x);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}