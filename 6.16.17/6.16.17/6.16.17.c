/*6.16.17. Chuckie Luchy 赢得了100万美元（税后），他把奖金存入年利率8%的账户。
在每年的最后一天，Chuckie 取出10万美元。编写一个程序，计算多少年后Chuckie会取完账户的钱？*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int y;
	float x;
	float sum = 100;
	x = 1 + 0.08;    //先把sum表达式规律找出来，再来赋值
	for (y = 1; sum > 0; y++)
	{
		sum = sum * x - 10; 
	}
	printf("%d\n", y - 1);
	return 0;
}