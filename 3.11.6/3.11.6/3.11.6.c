/*3.11.6. 1��ˮ���ӵ�����ԼΪ3.0*10^-23�ˡ�1����ˮ��Լ��950�ˡ�
��дһ��������ʾ�û�����ˮ�Ŀ�����������ʾˮ���ӵ�������*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	float water_M = 3.0e-23;     //1��ˮ���ӵ�����ԼΪ3.0*10^-23��
	float water_num = 950;       //1����ˮ��Լ��950��
	float KT;     //  ������
	float M;      //  ����
	printf("�������������");
	scanf("%f", &KT);
	M = KT * water_num;
	
	printf("%f�˵�ˮ���������ǣ�%e\n", M, M / water_M);
	return 0;
}