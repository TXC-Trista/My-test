/*3.11.5. һ���Լ��3.156*10^7�롣��дһ��������ʾ�û��������䣬Ȼ����ʾ�������Ӧ��������*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	double year_second = 3.156e7;    //һ���Լ��3.156e7��
	int age;
	double second;
	printf("�������������䣺");
	scanf("%d", &age);
	second = age * year_second;
	
	printf("%d���Ӧ�������ǣ�%e\n", age,second);
	return 0;
}