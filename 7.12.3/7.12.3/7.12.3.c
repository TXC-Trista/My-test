/*7.12.3. ��дһ�����򣬶�ȡ����ֱ���û�����0����������󣬳���Ӧ����
�û������ż����������0����������Щż����ƽ��ֵ�����������������������
��ƽ��ֵ��*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int num;
	int even_n = 0 ;      //ż������
	int odd_n = 0;        //��������
	float s_even = 0.0;   //����ż���ĺ�
	float s_odd = 0.0;    //���������ĺ�

	while (((scanf("%d", &num) == 1)) && num != 0)
	{
		if (num % 2 == 0)
		{
			s_even += num;
			++even_n;
		}
		else
		{
			s_odd += num;
			++odd_n;
		}
	}
	printf("ż������ = %d\n�������� = %d\nż��ƽ��ֵ = %.1f\n����ƽ��ֵ = %.1f\n",
		even_n, odd_n, s_even / even_n, s_odd / odd_n);
	return 0;
}