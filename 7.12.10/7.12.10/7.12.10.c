/*7.12.10. 1988�����������˰�ռƻ��ǽ�����򵥵�˰�շ���������Ϊ4�����ÿ������������ȼ���
�����Ǹ�˰�ռƻ���ժҪ����Ԫ��ΪӦ��˰�����룩��
���                   ˰��
����                   17850��Ԫ��15%�ƣ��������ְ�28%��
����                   23900��Ԫ��15%�ƣ��������ְ�28%��
�ѻ飬����              29750��Ԫ��15%�ƣ��������ְ�28%��
�ѻ飬����              14875��Ԫ��15%�ƣ��������ְ�28%��
���磬һλ����Ϊ20000��Ԫ�ĵ�����˰�ˣ�Ӧ����˰��Ϊ0.15*17850+0.28*(20000-17850)��Ԫ����д
һ���������û�ָ������˰��������Ӧ�������룬Ȼ�����˰�𡣳���Ӧͨ��ѭ�����û����Զ�����롣*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define RATE1   0.15      //��1��˰��
#define RATE2   0.28      //��2��˰��
#define SINGLE   17850    //����������
#define OWNER    23900    //����������
#define COMMON   29750    //�ѻ鹲��������
#define DEVORCE  14875    //����������
void menu();
int main(void)
{
	int lever;           //��˰����
    double base;         //������
    double income = -1;  //����(��ʼֵ��Ϊ��������Ϊ�˺���ֱ�ӽ���whileѭ����
    double taxes;        //��˰
    do
    {
    begin:
        menu();
        printf("��ѡ�����˰������ࣺ");
        scanf("%d", &lever);
        while (getchar() != '\n')   //getchar()������ջ�����
            ;                   //���ַ�����ռλ
        switch (lever)
        {
        case 1: base = SINGLE;
            break;
        case 2: base = OWNER;
            break;
        case 3: base = COMMON;
            break;
        case 4: base = DEVORCE;
            break;
        case 5: printf("��������\n");
            goto end;     //����5��ֱ�ӳ������
        default:
            printf("��������ȷ��ѡ�\n");
            goto begin;   //����1-5����ģ����´�ӡ�˵���ѡ��˰������
        }
    } while (5 == lever);
  
    while (income < 0)    //��ѭ������ȷ��������������0
    {
        printf("��������������(����0)��");
        scanf("%lf", &income);
        while (getchar() != '\n')   //getchar()������ջ�����
            ;                   //���ַ�����ռλ
    }
    if (income <= base)          //����С�ڵ���������ʱ
        taxes = income * RATE1;  //˰�� = ���� * 0.15;
    else                         //�������������ʱ
        taxes = base * RATE1 + (income - base) * RATE2;
    //˰�� = ������ * 0.15 + (���� - ������) * 0.28;
   
    printf("����%d��Ҫ���ɵ�˰���ǣ�%.1lf", lever, taxes);
    end:
	return 0;
}
void menu()
{
	printf("********************************************\n");
	printf("1) SINGLE 17850                2) OWNER 23900\n");
	printf("3) COMMON 29750                4) DEVORCE 14875\n");
	printf("5) quit\n");
	printf("********************************************\n");
}
