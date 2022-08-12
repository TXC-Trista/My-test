/*6.16.2. 使用嵌套格式，按下面的格式打印字符：
$
$$
$$$
$$$$
$$$$$
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int x, y;
	for (x = 1; x <= 5; x++)
	{
		for (y = 0; y < x; y++)
		{
			printf("$");
		}
		printf("\n");
	}
	return 0;
}