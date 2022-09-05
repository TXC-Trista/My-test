/*7.12.7. 编写一个程序，提示用户输入一周工作的小时数，然后打印工资总额、税金和净收入。
做如下假设：
a.基本工资=10美元/小时
b.加班（超过40小时）= 1.5倍的时间
c.税率：前300美元为15%
       续150美元为20%
       余下的为25%
用#define定义常量符号。不用在意是否符合当前的税法。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define BASE_PAY 10      //基本工资
#define OVERTIME 1.5     //加班时间系数
#define BREAK1   300     //税率的第1个临界点
#define BREAK2   450     //税率的第1个临界点
#define RATE1    0.15    //前300美元的税率
#define RATE2    0.2     //续150美元的税率
#define RATE3    0.25    //大于450美元的税率
int main(void)
{
    double h;           //一周工作的小时数
    double all_pay;     //工资总额
    double over_pay;    //加班费
    double rate;        //税金
    double net_in;      //净收入

    printf("请输入一周工作的小时数：");
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
    
    printf("一周工作%.1lf小时，工资总额=%.1lf美元, 税金=%.1lf美元, 净收入=%.1lf美元\n",
        h, all_pay, rate, net_in);
    
    return 0;
}