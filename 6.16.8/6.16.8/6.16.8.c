/*6.16.8. ��дһ������Ҫ���û���������������������ӡ����֮����������˻��Ľ����
���û����������֮ǰ������Ӧѭ�������û������ÿ��ֵ��*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	float x, y;
	printf("������������������\n");
	while (scanf("%f %f", &x, &y) == 2)
	{
		printf("%f\n", (x - y) / (x * y));
	}
	printf("��������֣�����ѭ��\n");
	return 0;
}