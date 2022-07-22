/*3.11.5. 一年大约有3.156*10^7秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	double year_second = 3.156e7;    //一年大约有3.156e7秒
	int age;
	double second;
	printf("请输入您的年龄：");
	scanf("%d", &age);
	second = age * year_second;
	
	printf("%d岁对应的秒数是：%e\n", age,second);
	return 0;
}