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
#define BASE_PAY 10      //��������
#define OVERTIME 1.5     //�Ӱ�ʱ��ϵ��
#define BREAK1   300     //˰�ʵĵ�1���ٽ��
#define BREAK2   450     //˰�ʵĵ�1���ٽ��
#define RATE1    0.15    //ǰ300��Ԫ��˰��
#define RATE2    0.2     //��150��Ԫ��˰��
#define RATE3    0.25    //����450��Ԫ��˰��
int main(void)
{
    double h;           //һ�ܹ�����Сʱ��
    double all_pay;     //�����ܶ�
    double over_pay;    //�Ӱ��
    double rate;        //˰��
    double net_in;      //������

    printf("������һ�ܹ�����Сʱ����");
    scanf("%lf", &h);
    
    if (h > 40)
    {
        over_pay = ((h - 40) * OVERTIME) * BASE_PAY;
        all_pay = over_pay + 40 * (double)BASE_PAY;
    }
    else
        all_pay = h * BASE_PAY;
   
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
    
    return 0;
}