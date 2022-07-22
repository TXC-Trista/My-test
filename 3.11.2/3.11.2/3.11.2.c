/*3.11.2. 编写一个程序，要求提示输入一个ASCII码值（如，66），然后打印输入的字符。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int num;
	printf("请输入一个ASCII码值：");
	scanf("%d", &num);
	printf("ASCII码%d对应的字符是：%c\n", num, num);
	return 0;
}