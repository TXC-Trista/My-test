/*5.11.2. ��дһ�������û���ʾ����һ��������Ȼ���ӡ�Ӹ������ȸ�����10����������
�������û�����5�����ӡ5~15����������������5��15����Ҫ���ӡ�ĸ�ֵ֮����һ���ո��Ʊ�����з��ֿ���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num;
	
	printf("������һ��������");
	scanf("%d", &num);
	
	int i = num + 10;

	while (num <= i) 
	{
		printf("%d\n", num++);
	}
	return 0;
}