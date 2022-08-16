/*6.16.11. 编写一个程序，在数组中读入8个整数，然后按倒序打印这8个整数。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int ch[8];
	int n;
	int x;
	printf("请输入8个整数：\n");
	for (n = 0; n < 8; n++)
	{
		scanf("%d", &ch[n]);   //可以输入8个以上，但是最后只读取8个
	}
	
	printf("确认读取8个整数：\n");
	for (n = 0; n < 8; n++)
	{
		printf("%d ", ch[n]);
	}
	printf("\n");
	
	printf("倒序为：\n");
	for (x = 7; x >= 0; x--)
	{
		printf("%d ", ch[x]);
	}
	printf("\n");
	return 0;
}