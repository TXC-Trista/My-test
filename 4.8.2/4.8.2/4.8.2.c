/*4.8.2. ��дһ��������ʾ�û����������գ���ִ�����²�����
a. ��ӡ�����գ�����˫���ţ�
b. �ڿ��Ϊ20���ֶ��Ҷ˴�ӡ�����գ�����˫���ţ�
c. �ڿ��Ϊ20���ֶ���˴�ӡ�����գ�����˫���ţ�
d. �ڱ�������ȿ�3���ֶ��д�ӡ�����ա�*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char name[50];            //name����
	char surname[30];         //surname���� 
	int a = 0, b = 0;         
	
	printf("��������������");
	scanf("%s", name);
	a = strlen(name);        //a�����ֵ��ַ�����

	printf("�����������գ�");
	scanf("%s", surname);
	b = strlen(surname);     //b���յ��ַ�����

	// printf()��*���η������ú�scanf()��*���η������ò�ͬ
	
	printf("\"%s %s\"\n", name, surname);

	printf("\"%0*s %s\"\n", 20 + a, name, surname);    
	//�˴�*����˼�ǣ��Ѻ����Ӧ�� 20+a ��������*ʹ�ã����a=4����%*s����%24s
	//����20+a���ݸ�*ʹ�ã���name���ݸ���1��sʹ�ã���surname���ݸ���2��sʹ��
	//����printf("\"%24s %s\"\n", 20 + a, name, surname);
	//������Ϊ"                    name surname"����ô��֤ǰ��Ŀո���20�ֶΣ�
	//�� %*s �� * ǰ�Ӹ�0��� %0*s��ǰ��Ŀո�ͻᱻ0���棬����һ���ж��ٸ�0
	//����printf("\"%0*s %s\"\n", 20 + a, name, surname)
	
	printf("\"%-*s %-*s\"\n", a, name, 20 + b, surname);
	//�Ѳ���a���ݸ���1��*ʹ�ã�name���ݸ���1��sʹ��
	//20+b���ݸ���2��*ʹ�ã�surname���ݸ���2��sʹ��

	printf("\"%0*s %s\"\n", a+3, name, surname);
	//�Ѳ���a+3���ݸ�*ʹ�ã���name���ݸ���1��sʹ�ã���surname���ݸ���2��sʹ��

	return 0;
}