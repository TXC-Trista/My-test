/*6.16.9. �޸���ϰ8��ʹ��һ���������ؼ���Ľ����
��ϰ8��Ŀ����дһ������Ҫ���û���������������������ӡ����֮����������˻��Ľ����
���û����������֮ǰ������Ӧѭ�������û������ÿ��ֵ��*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
float temp(float x, float y);
int main(void)
{
	float a, b, c;
	printf("������������������\n");
	while (scanf("%f %f", &a, &b) == 2)  //scanf���ص��Ƕ�ȡ�ɹ��ĸ���
	{
		c = temp(a, b);
		printf("%f\n", c);
	}
	printf("��������֣�����ѭ��\n");
	return 0;
}
float temp(float x, float y)
{
	float z;
	z = (x - y) / (x * y);
	return z;
}