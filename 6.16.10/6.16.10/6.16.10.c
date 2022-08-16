/*6.16.10. 编写一个程序，要求用户输入一个上限整数和一个下限整数，计算从上限到下限范围内所有整数的平方和，
并显示计算结果。然后程序继续提示用户输入上限和下限整数，并显示结果，直到用户输入的上限整数等于或小于下限整数为止。
程序的运行示例如下：
Enter lower and upper integer limits: 5 9
The sums of the squares from 25 to 81 is 255
The next set of limits: 3 25
The sums of the squares from 9 to 625 is 5520
The next set of limits: 5 5
Done
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int x = 0;   //下限
	int y = 0;   //上线
	int n = 0;
	int sum = 0;
	printf("Enter lower and upper integer limits: ");
	scanf("%d %d", &x, &y);
	while (x < y)
	{
		for (n = x; ((n >= x) && (n <= y)); n++)
			sum += (n * n);
		printf("The sums of the squares from %d to %d is %d\n", x * x, y * y, sum);
		sum = 0;
		printf("The next set of limits: ");
		scanf("%d %d", &x, &y);
	}
	printf("Done\n");
	return 0;
}