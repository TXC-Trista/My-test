/*3.11.6. 1个水分子的质量约为3.0*10^-23克。1夸脱水大约是950克。
编写一个程序，提示用户输入水的夸脱数，并显示水分子的质量。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	float water_M = 3.0e-23;     //1个水分子的质量约为3.0*10^-23克
	float water_num = 950;       //1夸脱水大约是950克
	float KT;     //  夸脱数
	float M;      //  质量
	printf("请输入夸托数：");
	scanf("%f", &KT);
	M = KT * water_num;
	
	printf("%f克的水分子数量是：%e\n", M, M / water_M);
	return 0;
}