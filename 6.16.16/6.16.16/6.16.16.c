/*6.16.16. Daphne��10%�ĵ���ϢͶ����100��Ԫ��Ҳ����˵��ÿ��Ͷ�ʻ����൱��ԭʼͶ�ʵ�10%����
Deirdre ��5%�ĸ�����ϢͶ����100��Ԫ��Ҳ����˵����Ϣ�ǵ�ǰ����5%������֮ǰ����Ϣ����
��дһ�����򣬼�����Ҫ������Deirdre��Ͷ�ʶ�Żᳬ��Daphne������ʾ��ʱ���˵�Ͷ�ʶ*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	float x, z;
	int y = 0;
	float sum_da = 100;    //Daphne
	float sum_de = 100;    //Deirdre
	x = 100 * 0.1;
	z = 1 + 0.05;
	for (y = 1; sum_de <= sum_da; y++)
	{
		sum_da = 100 + (x * y);	
		sum_de *= z;	
	}
	printf("���� %d ��Deirdre��Ͷ�ʶ�Żᳬ��Daphnen\n", y - 1);
	printf("%.2f\n", sum_da);
	printf("%.2f\n", sum_de);
	return 0;
}
