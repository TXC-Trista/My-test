/*6.16.13. ��дһ�����򣬴���һ������8��Ԫ�ص�int�������飬�ֱ������Ԫ������Ϊ2��ǰ8���ݡ�
ʹ��forѭ����������Ԫ�ص�ֵ��ʹ��do whileѭ����ʾ����Ԫ�ص�ֵ��*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define SIZE 8    //��8����Ϊ�����������Ժ���Ե���Ԫ�ظ����ܷ���
int main(void)
{
	int i = 0;
	int digit[SIZE];
	int sum = 1;
	for (i = 0; i < SIZE; i++)
	{
		digit[i] = sum;
		sum *= 2;    //2��n�η�������n��2���
	}
	i = 0;
	do
	{
		printf("�� %d ��Ԫ�ص�ֵ�ǣ�%d\n", i, digit[i]);
		i++;
	} while (i < 8);
	return 0;
}