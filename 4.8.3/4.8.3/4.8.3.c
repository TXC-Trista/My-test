/*4.8.3. ��дһ�����򣬶�ȡһ����������������С�����������ӡ��Ȼ����ָ����������ӡ��
������ĸ�ʽ���������ϵͳ��ͬ��ָ����������ʾ��λ�����ܲ�ͬ����
a. ����21.3��2.1e+001;
b. ����+21.290��2.129E+001��
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	float num1;
	float num2;
	scanf("%f", &num1);
	scanf("%f", &num2);
	
	printf("����%4.1f �� %2.1e\n", num1, num1);
	printf("����%+7.3f �� %5.3E\n", num2, num2);

	return 0;
}