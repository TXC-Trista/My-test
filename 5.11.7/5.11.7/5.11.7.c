/*5.11.7. ��дһ��������ʾ�û�����һ��double���͵���������ӡ����������ֵ��
�Լ����һ���������㲢��ӡ����ֵ��main()����Ҫ���û������ֵ���ݸ��ú�����*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void cube(double n)   //����һ��CUBE()����
{
	printf("%e��������%e\n", n, n * n * n);
}
int main(void)
{
	double num;
	printf("������һ��double���͵�����");
	scanf("%lf", &num);   
	// scanf��float��%f��double��%lf, printf: ������float����double����%f
	cube(num);
	return 0;
}