/*6.16.17. Chuckie Luchy Ӯ����100����Ԫ��˰�󣩣����ѽ������������8%���˻���
��ÿ������һ�죬Chuckie ȡ��10����Ԫ����дһ�����򣬼���������Chuckie��ȡ���˻���Ǯ��*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int y;
	float x;
	float sum = 100;
	x = 1 + 0.08;    //�Ȱ�sum���ʽ�����ҳ�����������ֵ
	for (y = 1; sum > 0; y++)
	{
		sum = sum * x - 10; 
	}
	printf("%d\n", y - 1);
	return 0;
}