/*7.12.9. 编写一个程序，只接受正整数输入，然后显示所有小于或等于该数的素数。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main(void)
{
	int num = 0;
	int i = 0;
	int k = 0;
	int flag = 1;     //假设返回1，是素数，返回0，不是素数
	printf("请输入一个正整数：");
	scanf("%d", &num);
	while (num <= 0)   //0既不是正数也不是负数，所以也不是正整数
	{
		printf("请输入一个正整数：");
		scanf("%d", &num);
	}
	for (i = 2; i <= num; i++)
	{
		for (k = 2; k <= sqrt(i); k++) 
			//sqrt() 是开平方函数，需要引用头文件#include<math.h>
			// m = a * b
			//a和b中一定至少有一个数字是 <= 开平方m的
			//比如 16开平方等于4，16 = 2*8 = 4*4，所以判断到4就可以不用往后判断了
			//此处可写 k<i，但是 k<=sqrt(i) 计算步骤少一些
		{
			if (i % k == 0)
			{
				flag = 0;
				break;
			}
			else
			{
				flag = 1;
			}
		}	
		if (flag == 1)
			printf("%d是素数\n", i);
	}
	return 0;
}