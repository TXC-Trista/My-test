/*4.8.3. 编写一个程序，读取一个浮点数，首先以小数点计数法打印，然后以指数计数法打印。
用下面的格式进行输出（系统不同，指数计数法显示的位数可能不同）：
a. 输入21.3或2.1e+001;
b. 输入+21.290或2.129E+001；
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	float num1;
	float num2;
	scanf("%f", &num1);
	scanf("%f", &num2);
	
	printf("输入%4.1f 或 %2.1e\n", num1, num1);
	printf("输入%+7.3f 或 %5.3E\n", num2, num2);

	return 0;
}