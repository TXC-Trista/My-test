/*3.11.7. 1英寸相当于2.54厘米。编写一个程序，提示用户输入身高（/英寸），然后以厘米为单位显示身高。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	float inch;
	printf("请输入您的身高(英寸)：");
	scanf("%f", &inch);
	printf("您的身高为%.2f厘米\n", inch * 2.54);
	return 0;
}