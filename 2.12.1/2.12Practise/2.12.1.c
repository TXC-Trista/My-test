/*2.12.1. ��дһ�����򣬵���һ��printf()�����������������ӡ��һ�С�
�ٵ���һ��printf()����������������ֱ��ӡ�����С�
Ȼ���ٵ�������printf()�����������������ӡ��һ�С�
���Ӧ������ʾ����ȻҪ��ʾ�������ݻ��������������
Gustav Mahler     ��1�δ�ӡ������
Gustav            ��2�δ�ӡ������
Mahler            ���ǵ�2�δ�ӡ������
Gustav Mahler     ��3�κ͵�4�˴�ӡ������
*/


#include<stdio.h> 
int main(void)
{
	printf("Trista Tang\n");
	printf("Trista\nTang\n");
	printf("Trista ");
	printf("Tang\n");
	
	return 0;
}