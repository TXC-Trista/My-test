/*4.8.1. 编写一个程序，提示用户输入名和姓，然后以“名，姓”的格式打印出来。*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main(void)
{
	char name[50];
	char surname[30];
	printf("请输入您的名：");
	scanf("%s", name);
	printf("请输入您的姓：");
	scanf("%s", surname);
	printf("%s,%s\n", name, surname);
	
	return 0;
}