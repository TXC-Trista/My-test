/*6.16.7. 编写一个程序把一个单词读入一个字符数组中，然后倒序打印这个单词。
提示：strlen()函数（第4章介绍过）可用于计算数组最后一个字符的下标。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main(void)
{
	char ch[50];
	int x = 0;
	int y = 0;
	printf("请输入一个单词：");
	scanf("%s", ch);
	y = strlen(ch);  //strlen(ch) 是读取的字符串的长度
	
	printf("倒序是：");
	for (x = y - 1; x >= 0; x--)  //字符串长度-1，结束字符串最后一个字母的下标
	{
		printf("%c", ch[x]);
	}
	printf("\n");
	return 0;
}