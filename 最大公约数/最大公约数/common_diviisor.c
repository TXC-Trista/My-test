////求最大公约数
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	int max;
//	if (m > n)
//		max = n;
//	else
//		max = m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数是：%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//辗转相除法
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int m, n, t;
	scanf("%d %d", &m, &n);
	while (t = m % n)
	{
		m = n;
		n = t;
	}
	printf("最大公约数：%d", n);
	return 0;
}