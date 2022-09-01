/*7.12.4. 使用if else 语句编写一个整数读入，读到#停止。用感叹号替换句号，用两个
感叹号替换原来的感叹号，最后报告进了多少次替换。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char ch;
	char a = 0;    //转换次数
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			++a;
		}
		if (ch == '!')
		{
			ch = '!!';
			++a;
		}
	}
	printf("一共转换了：%d 次\n", a);
	return 0;
}