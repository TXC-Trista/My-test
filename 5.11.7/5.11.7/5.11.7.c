/*5.11.7. 编写一个程序，提示用户输入一个double类型的数，并打印该数的立方值。
自己设计一个函数计算并打印立方值。main()函数要把用户输入的值传递给该函数。*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void cube(double n)   //定义一个CUBE()函数
{
	printf("%e的立方是%e\n", n, n * n * n);
}
int main(void)
{
	double num;
	printf("请输入一个double类型的数：");
	scanf("%lf", &num);   
	// scanf：float用%f，double用%lf, printf: 不管是float还是double都用%f
	cube(num);
	return 0;
}