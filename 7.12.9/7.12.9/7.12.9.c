/*7.12.9. ��дһ������ֻ�������������룬Ȼ����ʾ����С�ڻ���ڸ�����������*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main(void)
{
	int num = 0;
	int i = 0;
	int k = 0;
	int flag = 1;     //���践��1��������������0����������
	printf("������һ����������");
	scanf("%d", &num);
	while (num <= 0)   //0�Ȳ�������Ҳ���Ǹ���������Ҳ����������
	{
		printf("������һ����������");
		scanf("%d", &num);
	}
	for (i = 2; i <= num; i++)
	{
		for (k = 2; k <= sqrt(i); k++) 
			//sqrt() �ǿ�ƽ����������Ҫ����ͷ�ļ�#include<math.h>
			// m = a * b
			//a��b��һ��������һ�������� <= ��ƽ��m��
			//���� 16��ƽ������4��16 = 2*8 = 4*4�������жϵ�4�Ϳ��Բ��������ж���
			//�˴���д k<i������ k<=sqrt(i) ���㲽����һЩ
		{
			if (i % k == 0)
			{
				flag = 0;
				break;
			}
			else
			{
				flag = 1;
			}
		}	
		if (flag == 1)
			printf("%d������\n", i);
	}
	return 0;
}