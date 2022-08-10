/*4.8.5. 编写一个程序，提示用户输入以兆位每秒（Mb/s）位单位的下载速度和以兆字节（MB）为单位的文件大小。
程序中应计算文件的下载时间。注意，这里1字节等于8位。使用float类型，并用/作为除号。
该程序要以下下面的格式打印三个变量的值（下载速度、文件大小和下载时间），显示小数点后面两位数字：
At 18.22 megabits per second, a file of 2.20 megabits
downloads in 0.97 seconds.*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main(void)
{
	float download_speed;    //下载速度
	float file_size;         //文件大小
	float download_time;     //下载时间

	printf("请输入下载速度（Mb/s）：");
	scanf("%f", &download_speed);

	printf("请输入文件大小（MB）：");
	scanf("%f", &file_size);
	
	download_time = (8 * file_size) / download_speed;
	printf("At %.2f megabits per second, a file of %.2f megabits\n", 
		download_speed, file_size);
	printf("downloads in %.2f seconds.\n", download_time);

	return 0;
}