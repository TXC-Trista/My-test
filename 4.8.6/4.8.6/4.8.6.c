/*4.8.6. ��дһ����������ʾ�û���������Ȼ����ʾ�����ա�
��һ�д�ӡ�û�����������գ���һ�зֱ��ӡ�����յ���ĸ����
��ĸ��Ҫ����Ӧ�����յĽ�β���룬������ʾ��
Melissa Honeybee
	  7        8
���������ٴ�Ӧ��ͬ����Ϣ��������ĸ��������Ӧ�����յĿ�ͷ���룬������ʾ��
Melissa Honeybee
7       8
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char name[30];
	char surname[30];
	int len_name;        
	int len_surname;

	printf("��������������");
	scanf("%s", name);
	len_name = strlen(name);

	printf("�����������գ�");
	scanf("%s", surname);
	len_surname = strlen(surname);

	printf("%s %s\n", name, surname);
	printf("%*d %*d\n", len_name, len_name, len_surname, len_surname);

	printf("%s %s\n", name, surname);
	printf("%-*d %-*d\n", len_name, len_name, len_surname, len_surname);

	return 0;
}