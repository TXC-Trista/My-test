/*4.8.8. 编写一个程序，提示用户输入旅行的里程和消耗的汽油量。
然后计算并显示消耗每加仑汽油行驶的英里数，显示小数点后面一位数字。
接下来，使用1加仑大约3.785升，1英里大约位1.609千米，把单位是英里/加仑的值转换为升/100公里
（欧洲通用的燃料表示法），并显示结果，显示小数点后面1位数字。
注意，美国采用的方案测量消耗单位燃料的行程（值越大越好），而欧洲则采用单位距离消耗的燃料测量方案（值越小越好）。
使用#define创建符号常量或使用const限定符创建变量来表示两个转换系数。*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define GALLON_TO_LITER 3.785    //1加仑 = 3.785升
#define MILE_TO_KM 1.609         //1英里 = 1.609千米
int main(void)
{
	float distance;    //里程
	float oil;         //消耗的汽油量
	float a_liter;     //美国燃料测量方案
	float u_mile;      //欧洲燃料测量方案
	
	printf("请输入旅行的里程（英里）：");
	scanf("%f", &distance);
	printf("请输入消耗的汽油量（加仑）：");
	scanf("%f", &oil);
	
	 a_liter = distance / oil;
	 u_mile  = (oil * 100 * GALLON_TO_LITER) / (distance * MILE_TO_KM);
	
	printf("美国燃料测量方案：%.1f 英里/加仑\n", a_liter);
	printf("欧洲燃料测量方案：%.1f 升/100千米\n", u_mile);  

	return 0;
}