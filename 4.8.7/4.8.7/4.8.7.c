/*4.8.7. ��дһ�����򣬽�һ��double���͵ı�������λ1.0/3.0��һ��float���͵ı�������λ1.0/3.0��
�ֱ���ʾ���μ���Ľ����3�Σ�һ����ʾС�������6λ���֣�һ����ʾС�������12λ���֣�һ����ʾС�������16λ���֡�
������Ҫ����float.hͷ�ļ�������ʾFLT_DIG��DBL_DIG��ֵ��1.0/3.0��ֵ����Щֵһ����*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<float.h>
int main(void)
{
	double d_num = 1.0 / 3.0;
	float f_num = 1.0 / 3.0;

	printf("%.6f %.12f %.16f\n", d_num, d_num, d_num);
	printf("%.6f %.12f %.16f\n", f_num, f_num, f_num);
	

	printf("float��������Ч����λ���ǣ�%d\n", FLT_DIG);
	printf("double��������Ч����λ���ǣ�%d\n", DBL_DIG);

	return 0;
}