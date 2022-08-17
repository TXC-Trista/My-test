/*6.16.12. 考虑下面两个无限序列：
1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + …
1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + …
编写一个程序计算这两个无限序列的总和，直到达到某次数。提示：奇数个-1相乘得-1，
偶数个-1相乘得1。让用户交互地输入指定的次数，当用户输入0或负值时结束输入。
查看运行100项、1000项、10000项后的总和，是否发现每个序列都收敛于某值？*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int num = 0;
	int k = 0;
	double m = 0;
	double n = 0;
	double sum_m = 0;
	double sum_n = 0;
	printf("请输入次数：\n");
	scanf("%d", &k);
	while (k > 0)
	{
		for (num = 0, m = 1.0, n = 1; num < k; num++, m++, n *= -1)
		{
			sum_m += 1.0 / m;
			sum_n += n / m;
		}
		printf("sum_m = %lf\n", sum_m);
		printf("sum_n = %lf\n", sum_n);
		
		printf("请输入次数：\n");
		scanf("%d", &k);
		sum_m = 0;     // 重新初始化
		sum_n = 0;     // 重新初始化
	}
	printf("结束\n");
	return 0;
}