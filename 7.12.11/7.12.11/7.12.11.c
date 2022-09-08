/*7.12.11. ABC�ʹ��ӻ�����۵����ۼ�Ϊ2.05��Ԫ/��������ۼ�Ϊ1.15��Ԫ/�������ܲ�
�ۼ�Ϊ1.09��Ԫ/����������˷�֮ǰ��100��Ԫ�Ķ�����5%�Ĵ����Żݡ����ڻ����5���Ķ���
��ȡ6.5��Ԫ���˷ѺͰ�װ�ѣ�5~20���Ķ�����ȡ14��Ԫ���˷ѺͰ�װ�ѣ�����20���Ķ�����
14��Ԫ�Ļ�����ÿ����1������0.5��Ԫ����дһ��������ѭ������switch���ʵ���û�����
��ͬ����ĸʱ�в�ͬ����Ӧ��������a����Ӧ�����û������󼻵İ�����b����˵İ�����c�Ǻ�
�ܲ��İ�����q���˳�����������Ҫ��¼�ۼƵ�������������û�����4������ˣ�Ȼ������5��
����ˣ�����Ӧ����9������ˡ�Ȼ�󣬸ó���Ҫ��������ܼۡ��ۿۣ�����еĻ������˷ѺͰ�
װ�ѡ���󣬳���Ӧ��ʾ���еĹ�����Ϣ����Ʒ�ۼۡ���������������λ���������������߲˷��á�
�������ܷ��á��ۿۣ�����еĻ������˷ѺͰ�װ�ѣ��Լ����еķ����ܶ*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define PRICE1   2.05    //�󼻵��ۼ�
#define PRICE2   1.15    //��˵��ۼ�
#define PRICE3   1.09    //���ܲ��ۼ�
#define PACK_P1   6.5    //<=5�������յ��˷ѺͰ�װ��
#define PACK_P2   14     //����5С�ڵ���20�������յ��˷ѺͰ�װ��
#define PACK_E   0.5     //14Ԫ�����ϣ�����20�������յ��˷ѺͰ�װ��
#define DISCOUNT 0.05     //5%�Ĵ����Ż�
void menu();

int main(void)
{
	char type;           //Ʒ������
	double weight_a;      //���ζ���������
	double weight_b;      //���ζ����������
	double weight_c;      //���ζ������ܲ�����
	double sum_a = 0;         //��������
	double sum_b = 0;         //���������
	double sum_c = 0;         //���ܲ�������
	double sum_total = 0;         //������
	double sum_price = 0;         //�������߲��ܷ���
	double pack = 0;              //��װ�Ѻ��˷�
	double total = 0;             //�����ܷ���
	double discount = 0;          //�ۿ�

	do
	{
		menu();
		printf("��ѡ����Ҫ������Ʒ�֣�");
		scanf("%c", &type);
		while (getchar() != '\n')   //getchar()������ջ�����
			;                   //���ַ�����ռλ
		switch (type)
		{
		case 'a': printf("�������󼻵İ�����");
			scanf("%lf", &weight_a);
			while (getchar() != '\n')   //getchar()������ջ�����
				;                   //���ַ�����ռλ
			sum_a += weight_a;
			break;
		case 'b': printf("��������˵İ�����");
			scanf("%lf", &weight_b);
			while (getchar() != '\n')   //getchar()������ջ�����
				;                   //���ַ�����ռλ
			sum_b += weight_b;
			break;
		case 'c': printf("��������ܲ��İ�����");
			scanf("%lf", &weight_c);
			while (getchar() != '\n')   //getchar()������ջ�����
				;                   //���ַ�����ռλ
			sum_c += weight_c;
			break;
		case 'q': printf("�˳�����\n");
			break;
		default: 
			printf("��������ȷ��ָʾ��\n");
			break;
		}
	} while (type != 'q');

	sum_total = sum_a + sum_b + sum_c;
	sum_price = sum_a * PRICE1 + sum_b * PRICE2 + sum_c * PRICE3;
	
	if (sum_total <= 5)
		pack = PACK_P1;
	else if (sum_total > 5 && sum_total <= 20)
		pack = PACK_P2;
	else if (sum_total > 20)
		pack = PACK_P2 + (sum_total - 20) * 0.5;
	if (sum_price > 100)
		discount = sum_price * DISCOUNT;
	total = sum_price + pack - discount;

	printf("�󼻵��ۼ��� %.2lf ��Ԫ, ��˵��ۼ��� %.2lf ��Ԫ, ���ܲ����ۼ��� %.2lf ��Ԫ\n", 
		PRICE1, PRICE2, PRICE3);
	printf("�������������� %.2lf ��, ��������������� %.2lf ��, �����ĺ��ܲ������� %.2lf ��\n", 
		sum_a, sum_b, sum_c);
	printf("�������������� %.2lf �����������߲˷����� %.2lf ��Ԫ\n", 
		sum_total, sum_price);
	printf("�˷ѺͰ�װ���� %.2lf ��Ԫ���ۿ��� %.2lf ��Ԫ\n", 
		pack, sum_price > 100 ? discount : 0);
	printf("�����ܶ��� %.2lf ��Ԫ\n", total);
	return 0;
}
void menu()
{
	printf("*****************************************\n");
	printf("a)��                             b)���\n");
	printf("c)���ܲ�                           q)�˳�����\n");
	printf("*****************************************\n");
}