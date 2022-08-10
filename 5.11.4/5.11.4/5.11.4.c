/*5.11.4. 编写一个程序，提示用户输入一个身高（单位：厘米），并分别以厘米和英寸为单位显示该值，
允许有小数部分。程序应该能让用户重复输入升高，直到用户输入一个非正值。其输出示例如下：
Enter a height in centimeters：182
182.0 cm = 5 feet, 11.7 inches
Enter a height in centimeters(<= 0 tu quit)：168.6
168.6 cm = 5 feet, 6.4 inches
Enter a height in centimeters(<= 0 tu quit)：0
bye
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define FEET_TO_INCHES 12    //1英尺 = 12英寸
#define CM_TO_INCHES 0.394   //1厘米 = 0.394英寸
int main(void)
{
	float height, all_inches, feet, left_inches;
	printf("Enter a height in centimeters：");
	scanf("%f", &height);
	while (height > 0)
	{
		all_inches = CM_TO_INCHES * height;
		feet = (int)(all_inches / FEET_TO_INCHES);   //把feet的值变成float类型的整数
		left_inches = all_inches - (FEET_TO_INCHES * feet);
		
		printf("%.1f cm = %.f feet, %.1f inches\n", height, feet, left_inches);
		//或 printf("%.1f cm = %d feet, %.1f inches\n", height, (int)feet, left_inches);
		printf("Enter a height in centimeters(<= 0 tu quit)：");
		scanf("%f", &height);
	}
	printf("bye\n");
	return 0;
}