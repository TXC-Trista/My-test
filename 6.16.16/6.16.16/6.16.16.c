/*6.16.16. Daphne以10%的单利息投资了100美元（也就是说，每年投资获利相当于原始投资的10%）。
Deirdre 以5%的复合利息投资了100美元（也就是说，利息是当前余额的5%，包含之前的利息）。
编写一个程序，计算需要多少年Deirdre的投资额才会超过Daphne，并显示那时两人的投资额。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	float x, z;
	int y = 0;
	float sum_da = 100;    //Daphne
	float sum_de = 100;    //Deirdre
	x = 100 * 0.1;
	z = 1 + 0.05;
	for (y = 1; sum_de <= sum_da; y++)
	{
		sum_da = 100 + (x * y);	
		sum_de *= z;	
	}
	printf("经过 %d 年Deirdre的投资额才会超过Daphnen\n", y - 1);
	printf("%.2f\n", sum_da);
	printf("%.2f\n", sum_de);
	return 0;
}
