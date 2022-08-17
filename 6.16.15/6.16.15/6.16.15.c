/*6.16.15. 编写一个程序，读取一行输入，然后把输入的内容倒序打印出来。可以把输入储存在char类型的数组中，
假设每行字符不超过255。回忆一下，根据%c转换说明，scanf()函数一次只能从输入中读取一个字符，而且在用户按下
Enter键时scanf()函数会生成一个换行符(\n)。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define SIZE 255
int main(void)
{
	char ch[SIZE];
	int t, x;
	gets(ch);        //读取一整行
	t = strlen(ch);  //获取一整行的字符数
	for (x = t -1; x >= 0; x--)   //最右字符的下标是 字符数-1
	{
		//printf("%d %c\n", x, ch[x]);   //可以测试下标对应的字符
		printf("%c", ch[x]);
	}	
	printf("\n");
	return 0;
}