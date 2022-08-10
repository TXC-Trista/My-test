/*5.11.2. 编写一个程序，用户提示输入一个整数，然后打印从该数到比该数大10的所有整数
（例如用户输入5，则打印5~15的所有整数，包括5和15）。要求打印的各值之间用一个空格、制表符或换行符分开。*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num;
	
	printf("请输入一个整数：");
	scanf("%d", &num);
	
	int i = num + 10;

	while (num <= i) 
	{
		printf("%d\n", num++);
	}
	return 0;
}