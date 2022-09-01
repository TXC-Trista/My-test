/*7.12.1. 编写一个程序，读到#字符停止，然后报告读取的空格数，换行符数和所有其他字符的数量。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char ch;
	int i = 0;   //空格数
	int n = 0;   //换行符数
	int k = 0;   //其他字符数
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			i++;
		else if (ch == '\n')
			n++;
		else
			k++;
	}
	printf("空格数：%d，换行符数：%d，其他字符数：%d", i, n, k);
	return 0;
}