/*5.11.3. ��дһ��������ʾ�û�����������Ȼ����ת��Ϊ������������
���磬�û�����18����ת����2��4�졣������ĸ�ʽ��ʾ�����
18 days are 2 weeks, 4 days.
ͨ��whileѭ�����û��ظ��������������û�����һ������ֵʱ����0��-20����ѭ��������*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define D_TO_W 7
int main(void)
{
	int days, weeks, left;
	printf("������������");
	scanf("%d", &days);
	while (days > 0)
	{
		weeks = days / 7;
		left = days % 7;
		printf("%d day are %d weeks, %d days.\n", days, weeks, left);
		printf("������������");
		scanf("%d", &days);
	}
	return 0;
}