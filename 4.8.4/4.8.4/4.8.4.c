/*4.8.4. 编写一个程序，提示用户输入身高（单位：英寸）和姓名，然后以下面的格式显示用户刚输入的信息：
Dabney, you are 6.208 feet tall
使用float类型，并用/作为除号。如果你愿意，可以要求用户以厘米为单位输入身高，并以米为单位显示出来。*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main(void)
{
	float height;
	char name[40];
	
	printf("请输入您的姓名：");
	scanf("%s", name);

	printf("请输入您的身高（单位：厘米）：");     //此处我选单位为厘米
	scanf("%f", &height);
	
	printf("%s, you are %.3f m tall/n", name, height / 100);

	return 0;
}