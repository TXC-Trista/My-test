/*7.12.6. 编写程序读入输入，读到#停止，报告ei出现的次数。
注意：该程序要记录前一个字符和当前字符。用"Receive your eieio award"这样的输入来测试。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define STOP '#'
int main(void)
{
	char ch;          //当前字符
	char pre_ch = 0;      //前一个字符
	int n = 0;        //计数
	while ((ch = getchar()) != '#')
	{
		//if ((ch == 'i') && (pre_ch == 'e'))    //两种写法都行
		if((pre_ch == 'e') && (ch == 'i'))    
		{
			n++;
		}
		pre_ch = ch;
	}
	printf("ei出现的次数：%d\n", n);
	return 0;
}