/*3.11.1. ͨ�����飨����д���д�������ĳ��򣩹۲�ϵͳ��δ����������硢����������͸���������������*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	//1���ֽ� = 8λ n��ʾλ
	//�����з���ȡֵ��Χ��[-2 ^ (n - 1), 2 ^ (n - 1) - 1]
	//�����޷���ȡֵ��Χ��[0, 2 ^ n - 1]
	//float���ͣ������ȸ��������ͣ�ռ��4�ֽڣ���ֵ��ΧΪ - 3.4E+38 �� 3.4E+38
	int i = 12345862514;
	float big = 4.4e38;
	float small = -3.4e38/10e100;
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(float));
	printf("%d\n", i);      //��������
	printf("%e\n", big);      //����������
	printf("%e\n", small);    //����������
	return 0;
}
