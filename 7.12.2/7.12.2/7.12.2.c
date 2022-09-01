/*7.12.2. 编写一个程序读取输入，读到#字符停止。程序要打印每个输入的字符以及对应的
ASKII码（十进制）。每行打印8个“字符-ASKII码”组合。建议：使用字符计数和求模运算符
（%）在每8个循环周期时打印一个换行符。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char ch;
	int n = 0;   //字符数
	while ((ch = getchar()) != '#')
	{
		n++;
		printf("%c:%d  ", ch, ch);
		if (n % 8 == 0)
		{
			printf("\n");
		}
	}
	return 0;
}