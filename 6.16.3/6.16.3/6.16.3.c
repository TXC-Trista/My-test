/*6.16.3. ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ��ĸ��
F
FE
FED
FEDC
FEDCB
FEDCBA
ע�⣺������ϵͳ��ʹ��ASCII������������˳�����Ĵ��룬���԰��ַ������ʼ��Ϊ��ĸ���е���ĸ��
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