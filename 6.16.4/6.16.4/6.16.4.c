/*6.16.4. ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ��ĸ��

������ϵͳ������������˳�����Ĵ��룬�������ϰ3�ķ��������*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int x;   //��
	int y;   //�±�
	int k;   
	int sum = 0;
	
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