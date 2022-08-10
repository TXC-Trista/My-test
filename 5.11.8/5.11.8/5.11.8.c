/*5.11.8. 编写一个程序，显示求模运算的结果。用户输入的第1个整数作为求模运算符的第2个运算对象，
该数再运算过程中保持不变。用户后面输入的数是第1个运算对象。当用户输入下一个非正值时，程序结束。
其输出示例如下：
This program computers moduli.
Enter an integer to serve as the second operand: 256
Now enter the first operand: 438
438 % 256 is 182
Enter next number for first operand(<= 0 to quit): 1234567
1234567 % 256 is 135
Enter next number for first operand(<= 0 to quit): 0
Done
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num1, num2, num;
	printf("This program computers moduli.\n");
	printf("Enter an integer to serve as the second operand: ");
	scanf("%d", &num1);
	printf("Now enter the first operand: ");
	scanf("%d", &num2);
	while (num1 > 0 && num2 > 0)  // &&：逻辑与
	{
		num = num2 % num1;
		printf("%d %% %d is %d\n", num2, num1, num);
		printf("Enter next number for first operand(<= 0 to quit): ");
		scanf("%d", &num2);
	}
	printf("Done\n");
	return 0;
}