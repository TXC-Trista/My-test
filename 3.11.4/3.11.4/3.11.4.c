/*3.11.4. ��дһ�����򣬶�ȡһ�����������ȴ�ӡ��С������ʽ���ٴ�ӡ��ָ����ʽ��
Ȼ�����ϵͳ֧���ٴ�ӡ��P����������ʮ�����Ƽ���������
�����¸�ʽ�����ʵ����ʾ��ָ��λ����ϵͳ���죩��
Enter a floating-point value:64.25
fixed-point notation: 64.250000
exponential notation: 6.425000e+01
p notation: 0x1.01p+6
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	float num;
	printf("Enter a floating-point value:");
	scanf("%f", &num);
	printf("fixed-point notation: %f\n", num);     //%f ��ӡС��
	printf("exponential notation: %e\n", num);     //%e ��ӡָ��
	printf("p notation: %a\n", num);               //%a ��ӡp������
	
	return 0;
}