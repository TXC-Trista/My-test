/*4.8.4. ��дһ��������ʾ�û�������ߣ���λ��Ӣ�磩��������Ȼ��������ĸ�ʽ��ʾ�û����������Ϣ��
Dabney, you are 6.208 feet tall
ʹ��float���ͣ�����/��Ϊ���š������Ը�⣬����Ҫ���û�������Ϊ��λ������ߣ�������Ϊ��λ��ʾ������*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main(void)
{
	float height;
	char name[40];
	
	printf("����������������");
	scanf("%s", name);

	printf("������������ߣ���λ�����ף���");     //�˴���ѡ��λΪ����
	scanf("%f", &height);
	
	printf("%s, you are %.3f m tall/n", name, height / 100);

	return 0;
}