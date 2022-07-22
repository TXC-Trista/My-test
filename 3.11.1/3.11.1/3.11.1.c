/*3.11.1. 通过试验（即编写带有此类问题的程序）观察系统如何处理整数上溢、浮点数上溢和浮点数下溢的情况。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	//1个字节 = 8位 n表示位
	//整数有符号取值范围：[-2 ^ (n - 1), 2 ^ (n - 1) - 1]
	//整数无符号取值范围：[0, 2 ^ n - 1]
	//float类型（单精度浮点数类型）占用4字节，数值范围为 - 3.4E+38 到 3.4E+38
	int i = 12345862514;
	float big = 4.4e38;
	float small = -3.4e38/10e100;
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(float));
	printf("%d\n", i);      //整数上溢
	printf("%e\n", big);      //浮点数上溢
	printf("%e\n", small);    //浮点数下溢
	return 0;
}
