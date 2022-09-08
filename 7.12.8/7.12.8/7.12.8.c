/*7.12.8. 修改练习7的假设a，让程序可以给出一个供选择的工资等级菜单。
使用switch完成工资等级选择。运行程序后，显示的菜单应该类似这样：
    printf("********************************************");
    printf("1) $8.75/hr                 2) $9.33/hr");
    printf("3) $10.00/hr                4) $11.2/hr");
    printf("5) quit");
    printf("********************************************");
如果选择1~4其中的数字，程序应该询问用户工作的小时数。程序要通过循环运行，除非用户输入5。
如果输入1~5之外的数字，程序应提醒用户输入正确的选项，然后再重复显示菜单提示用户输入。
使用#define创建符号常量表示各工资等级和税率。*/
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
//#define BASE_PAY 10      //基本工资
#define OVERTIME 1.5     //加班时间系数
#define BREAK1   300     //税率的第1个临界点
#define BREAK2   450     //税率的第1个临界点
#define RATE1    0.15    //前300美元的税率
#define RATE2    0.2     //续150美元的税率
#define RATE3    0.25    //大于450美元的税率
void base_menu();
int main(void)
{
    double h = -1;    //一周工作的时间(初始值设为负数，是为了后面直接进入while循环）
    int lever = 0;          //工资等级
    double base_pay = 0;    //基本工资
    double all_pay;     //工资总额
    double over_pay;    //加班费
    double rate;        //税金
    double net_in;      //净收入

    do
    {
    begin:
        base_menu();
        printf("请选择工资等级(1-4)：");
        scanf("%d", &lever);
        while (getchar()!= '\n')   //getchar()用来清空缓冲区
            ;                   //空字符用来占位
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
        case 5: printf("结束程序\n");
            goto end;     //输入5，直接程序结束
        default:
            printf("请输入正确的选项！\n");
            goto begin;   //输入1-5以外的，重新打印菜单，选择工资等级
        }
    } while (5 == lever);

    while (h < 0)    //此循环用来确保输入的小时数大于0
    {
        printf("请输入一周工作的小时数(h>0)：");
        scanf("%lf", &h);
        while (getchar() != '\n')   //getchar()用来清空缓冲区
            ;             //空字符用来占位
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

    printf("一周工作%.1lf小时，工资总额=%.1lf美元, 税金=%.1lf美元, 净收入=%.1lf美元\n",
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
