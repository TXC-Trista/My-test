/*6.16.2. ʹ��Ƕ�׸�ʽ��������ĸ�ʽ��ӡ�ַ���
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