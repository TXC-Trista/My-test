/*6.16.3. 使用嵌套循环，按下面的格式打印字母：
F
FE
FED
FEDC
FEDCB
FEDCBA
注意：如果你的系统不使用ASCII或其他以数字顺序编码的代码，可以把字符数组初始化为字母表中的字母：
char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; */

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char ch[6];
	int n = 0;
	int m = 0;

	for (n = 0; n < 6; n++)
	{
		for (m = 0; m <= n; m++)
		{
			ch[n] = 'F' - m;
			printf("%c", ch[n]);
		}
		printf("\n");
	}	
	return 0;
}