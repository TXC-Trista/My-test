/*6.16.4. 使用嵌套循环，按下面的格式打印字母：
A
BC
DEF
GHIJ
KLMNO
PQRSTU
如果你的系统不适用以数字顺序编码的代码，请参照练习3的方案解决。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int x;   //行
	int y;   //下标
	int k;   
	int sum = 0;  //打印次数
	
	for (x = 0; x < 6; x++)
	{
		k = sum;
		for (y = k; y <= k + x; y++)
		{
			printf("%c", 'A' + y);
			sum++;
		}
		printf("\n");
	}
	return 0;
}