/*3.11.8. ���������������ϵͳ�У�1Ʒ�ѵ���2����1������8��˾��1��˾����2�����ף�1�����׵���3���ס�
��дһ��������ʾ�û����뱭��������Ʒ�ѡ���˾�����ס�����Ϊ��λ��ʾ�ȼ�������
˼�����ڸó���Ϊ��ʹ�ø������ͱ��������͸����ʣ�*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	float cup;
	float pint;    //pint��Ʒ��
	float all_ounce;   //all_ounce:�ܰ�˾
	float big_spoons;  //big_spoons:������
	float teaspoons;   //teaspoons:����
	
	printf("�����뱭����");
	scanf("%f", &cup);
	pint = cup / 2;
	all_ounce = 8 * cup;
	big_spoons = 2 * all_ounce;
	teaspoons = 3 * big_spoons;
	
	printf("%.3f������%.3fƷ��\n", cup, pint);
	printf("%.3f������%.3f��˾\n", cup, all_ounce);
	printf("%.3f������%.3f������\n", cup, big_spoons);
	printf("%.3f������%.3f����\n", cup, teaspoons);

	return 0;
}