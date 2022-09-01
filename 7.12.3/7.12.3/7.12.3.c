/*7.12.3. 编写一个程序，读取整数直到用户输入0。输入结束后，程序应报告
用户输入的偶数（不包括0）个数，这些偶数的平均值、输入的奇数个数及其奇数
的平均值。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int num;
	int even_n = 0 ;      //偶数个数
	int odd_n = 0;        //奇数个数
	float s_even = 0.0;   //所有偶数的和
	float s_odd = 0.0;    //所有奇数的和

	while (((scanf("%d", &num) == 1)) && num != 0)
	{
		if (num % 2 == 0)
		{
			s_even += num;
			++even_n;
		}
		else
		{
			s_odd += num;
			++odd_n;
		}
	}
	printf("偶数个数 = %d\n奇数个数 = %d\n偶数平均值 = %.1f\n奇数平均值 = %.1f\n",
		even_n, odd_n, s_even / even_n, s_odd / odd_n);
	return 0;
}