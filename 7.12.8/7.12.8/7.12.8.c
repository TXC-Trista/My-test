/*7.12.8. �޸���ϰ7�ļ���a���ó�����Ը���һ����ѡ��Ĺ��ʵȼ��˵���
ʹ��switch��ɹ��ʵȼ�ѡ�����г������ʾ�Ĳ˵�Ӧ������������
    printf("********************************************");
    printf("1) $8.75/hr                 2) $9.33/hr");
    printf("3) $10.00/hr                4) $11.2/hr");
    printf("5) quit");
    printf("********************************************");
���ѡ��1~4���е����֣�����Ӧ��ѯ���û�������Сʱ��������Ҫͨ��ѭ�����У������û�����5��
�������1~5֮������֣�����Ӧ�����û�������ȷ��ѡ�Ȼ�����ظ���ʾ�˵���ʾ�û����롣
ʹ��#define�������ų�����ʾ�����ʵȼ���˰�ʡ�*/
/*7.12.7. ��дһ��������ʾ�û�����һ�ܹ�����Сʱ����Ȼ���ӡ�����ܶ˰��;����롣
�����¼��裺
a.��������=10��Ԫ/Сʱ
b.�Ӱࣨ����40Сʱ��= 1.5����ʱ��
c.˰�ʣ�ǰ300��ԪΪ15%
       ��150��ԪΪ20%
       ���µ�Ϊ25%
��#define���峣�����š����������Ƿ���ϵ�ǰ��˰����*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define BASE_PAY 10      //��������
#define OVERTIME 1.5     //�Ӱ�ʱ��ϵ��
#define BREAK1   300     //˰�ʵĵ�1���ٽ��
#define BREAK2   450     //˰�ʵĵ�1���ٽ��
#define RATE1    0.15    //ǰ300��Ԫ��˰��
#define RATE2    0.2     //��150��Ԫ��˰��
#define RATE3    0.25    //����450��Ԫ��˰��
void base_menu();
int main(void)
{
    double h = -1;    //һ�ܹ�����ʱ��(��ʼֵ��Ϊ��������Ϊ�˺���ֱ�ӽ���whileѭ����
    int lever = 0;          //���ʵȼ�
    double base_pay = 0;    //��������
    double all_pay;     //�����ܶ�
    double over_pay;    //�Ӱ��
    double rate;        //˰��
    double net_in;      //������

    do
    {
    begin:
        base_menu();
        printf("��ѡ���ʵȼ�(1-4)��");
        scanf("%d", &lever);
        while (getchar()!= '\n')   //getchar()������ջ�����
            ;                   //���ַ�����ռλ
        switch (lever)
        {
        case 1: base_pay = 8.75;
            break;
        case 2: base_pay = 9.33;
            break;
        case 3: base_pay = 10.00;
            break;
        case 4: base_pay = 11.2;
            break;
        case 5: printf("��������\n");
            goto end;     //����5��ֱ�ӳ������
        default:
            printf("��������ȷ��ѡ�\n");
            goto begin;   //����1-5����ģ����´�ӡ�˵���ѡ���ʵȼ�
        }
    } while (5 == lever);

    while (h < 0)    //��ѭ������ȷ�������Сʱ������0
    {
        printf("������һ�ܹ�����Сʱ��(h>0)��");
        scanf("%lf", &h);
        while (getchar() != '\n')   //getchar()������ջ�����
            ;             //���ַ�����ռλ
    }
    if (h > 40)
    {
        over_pay = ((h - 40) * OVERTIME) * base_pay;
        all_pay = over_pay + 40 * base_pay;
    }
    else
    {
        all_pay = h * base_pay;
    }
   
    if (all_pay <= BREAK1)
        rate = all_pay * RATE1;
    //rate = all_pay * 0.15
    else if ((all_pay > BREAK1) && (all_pay <= BREAK2))
        rate = (BREAK1 * RATE1) + ((all_pay - BREAK1) * RATE2);
    //rate = (300 * 0.15) + ((all_pay - 300) * 0.2)
    else
        rate = (BREAK1 * RATE1) + (((double)BREAK2 - (double)BREAK1) * RATE2) + 
        ((all_pay - BREAK2) * RATE3);
    //rate = (300 * 0.15) + ((450-300)*0.2) + ((all_pay - 450) * 0.25)

    net_in = all_pay - rate;

    printf("һ�ܹ���%.1lfСʱ�������ܶ�=%.1lf��Ԫ, ˰��=%.1lf��Ԫ, ������=%.1lf��Ԫ\n",
        h, all_pay, rate, net_in);
    end:
    return 0;
}
void base_menu()
{
    printf("********************************************\n");
    printf("1) $8.75/hr                 2) $9.33/hr\n");
    printf("3) $10.00/hr                4) $11.2/hr\n");
    printf("5) quit\n");
    printf("********************************************\n");
}
