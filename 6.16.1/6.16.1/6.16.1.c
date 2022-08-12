/*6.16.1. 编写一个程序，创建一个包含26个元素的数组，并在其中储存26个小写字母。
然后打印数组的所有内容。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char ch[26];
	int n = 0;

	for (n = 0; n < 26; n++)
	{
		ch[n] = 'a' + n;
		printf("%c ", ch[n]);
	}
	return 0;
}