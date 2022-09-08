/*7.12.10. 1988年的美国联邦税收计划是近代最简单的税收方案。它分为4个类别，每个类别有两个等级。
下面是该税收计划的摘要（美元数为应征税的收入）：
类别                   税金
单身                   17850美元按15%计，超出部分按28%计
户主                   23900美元按15%计，超出部分按28%计
已婚，共有              29750美元按15%计，超出部分按28%计
已婚，离异              14875美元按15%计，超出部分按28%计
例如，一位工资为20000美元的单身纳税人，应缴纳税费为0.15*17850+0.28*(20000-17850)美元。编写
一个程序，让用户指定缴纳税金的种类和应缴纳收入，然后计算税金。程序应通过循环让用户可以多次输入。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define RATE1   0.15      //第1档税率
#define RATE2   0.28      //第2档税率
#define SINGLE   17850    //单身起征点
#define OWNER    23900    //户主起征点
#define COMMON   29750    //已婚共有起征点
#define DEVORCE  14875    //离异起征点
void menu();
int main(void)
{
	int lever;           //交税种类
    double base;         //起征点
    double income = -1;  //收入(初始值设为负数，是为了后面直接进入while循环）
    double taxes;        //缴税
    do
    {
    begin:
        menu();
        printf("请选择缴纳税金的种类：");
        scanf("%d", &lever);
        while (getchar() != '\n')   //getchar()用来清空缓冲区
            ;                   //空字符用来占位
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
        case 5: printf("结束程序\n");
            goto end;     //输入5，直接程序结束
        default:
            printf("请输入正确的选项！\n");
            goto begin;   //输入1-5以外的，重新打印菜单，选择税金种类
        }
    } while (5 == lever);
  
    while (income < 0)    //此循环用来确保输入的收入大于0
    {
        printf("请输入您的收入(大于0)：");
        scanf("%lf", &income);
        while (getchar() != '\n')   //getchar()用来清空缓冲区
            ;                   //空字符用来占位
    }
    if (income <= base)          //收入小于等于起征点时
        taxes = income * RATE1;  //税金 = 收入 * 0.15;
    else                         //收入大于起征点时
        taxes = base * RATE1 + (income - base) * RATE2;
    //税金 = 起征点 * 0.15 + (收入 - 起征点) * 0.28;
   
    printf("种类%d需要缴纳的税金是：%.1lf", lever, taxes);
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
