/*4.8.5. ��дһ��������ʾ�û���������λÿ�루Mb/s��λ��λ�������ٶȺ������ֽڣ�MB��Ϊ��λ���ļ���С��
������Ӧ�����ļ�������ʱ�䡣ע�⣬����1�ֽڵ���8λ��ʹ��float���ͣ�����/��Ϊ���š�
�ó���Ҫ��������ĸ�ʽ��ӡ����������ֵ�������ٶȡ��ļ���С������ʱ�䣩����ʾС���������λ���֣�
At 18.22 megabits per second, a file of 2.20 megabits
downloads in 0.97 seconds.*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main(void)
{
	float download_speed;    //�����ٶ�
	float file_size;         //�ļ���С
	float download_time;     //����ʱ��

	printf("�����������ٶȣ�Mb/s����");
	scanf("%f", &download_speed);

	printf("�������ļ���С��MB����");
	scanf("%f", &file_size);
	
	download_time = (8 * file_size) / download_speed;
	printf("At %.2f megabits per second, a file of %.2f megabits\n", 
		download_speed, file_size);
	printf("downloads in %.2f seconds.\n", download_time);

	return 0;
}