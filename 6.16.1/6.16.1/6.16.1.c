/*6.16.1. ��дһ�����򣬴���һ������26��Ԫ�ص����飬�������д���26��Сд��ĸ��
Ȼ���ӡ������������ݡ�*/
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