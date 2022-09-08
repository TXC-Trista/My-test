/*7.12.11. ABC邮购杂货店出售的洋蓟售价为2.05美元/磅，甜菜售价为1.15美元/磅，胡萝卜
售价为1.09美元/磅。在添加运费之前，100美元的订单有5%的打折优惠。少于或等于5磅的订单
收取6.5美元的运费和包装费，5~20磅的订单收取14美元的运费和包装费，超过20磅的订单在
14美元的基础上每续重1磅增加0.5美元。编写一个程序，在循环中用switch语句实现用户输入
不同的字母时有不同的响应，即输入a的响应是让用户输入洋蓟的磅数，b是甜菜的磅数，c是胡
萝卜的磅数，q是退出订购。程序要记录累计的重量。即如果用户输入4磅的甜菜，然后输入5磅
的甜菜，程序应报告9磅的甜菜。然后，该程序要计算货物总价、折扣（如果有的话）、运费和包
装费。随后，程序应显示所有的购买信息：物品售价、订购的重量（单位：磅）、订购的蔬菜费用、
订单的总费用、折扣（如果有的话）、运费和包装费，以及所有的费用总额。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define PRICE1   2.05    //洋蓟的售价
#define PRICE2   1.15    //甜菜的售价
#define PRICE3   1.09    //胡萝卜售价
#define PACK_P1   6.5    //<=5磅订单收的运费和包装费
#define PACK_P2   14     //大于5小于等于20磅订单收的运费和包装费
#define PACK_E   0.5     //14元基础上，大于20磅订单收的运费和包装费
#define DISCOUNT 0.05     //5%的打折优惠
void menu();

int main(void)
{
	char type;           //品种类型
	double weight_a;      //单次订购洋蓟重量
	double weight_b;      //单次订购甜菜重量
	double weight_c;      //单次订购胡萝卜重量
	double sum_a = 0;         //洋蓟总重量
	double sum_b = 0;         //甜菜总重量
	double sum_c = 0;         //胡萝卜总重量
	double sum_total = 0;         //总重量
	double sum_price = 0;         //订购的蔬菜总费用
	double pack = 0;              //包装费和运费
	double total = 0;             //订单总费用
	double discount = 0;          //折扣

	do
	{
		menu();
		printf("请选择需要订购的品种：");
		scanf("%c", &type);
		while (getchar() != '\n')   //getchar()用来清空缓冲区
			;                   //空字符用来占位
		switch (type)
		{
		case 'a': printf("请输入洋蓟的磅数：");
			scanf("%lf", &weight_a);
			while (getchar() != '\n')   //getchar()用来清空缓冲区
				;                   //空字符用来占位
			sum_a += weight_a;
			break;
		case 'b': printf("请输入甜菜的磅数：");
			scanf("%lf", &weight_b);
			while (getchar() != '\n')   //getchar()用来清空缓冲区
				;                   //空字符用来占位
			sum_b += weight_b;
			break;
		case 'c': printf("请输入胡萝卜的磅数：");
			scanf("%lf", &weight_c);
			while (getchar() != '\n')   //getchar()用来清空缓冲区
				;                   //空字符用来占位
			sum_c += weight_c;
			break;
		case 'q': printf("退出订购\n");
			break;
		default: 
			printf("请输入正确的指示！\n");
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

	printf("洋蓟的售价是 %.2lf 美元, 甜菜的售价是 %.2lf 美元, 胡萝卜的售价是 %.2lf 美元\n", 
		PRICE1, PRICE2, PRICE3);
	printf("订购的洋蓟重量是 %.2lf 磅, 订购的甜菜重量是 %.2lf 磅, 订购的胡萝卜重量是 %.2lf 磅\n", 
		sum_a, sum_b, sum_c);
	printf("订购的总重量是 %.2lf 磅，订购的蔬菜费用是 %.2lf 美元\n", 
		sum_total, sum_price);
	printf("运费和包装费是 %.2lf 美元，折扣是 %.2lf 美元\n", 
		pack, sum_price > 100 ? discount : 0);
	printf("费用总额是 %.2lf 美元\n", total);
	return 0;
}
void menu()
{
	printf("*****************************************\n");
	printf("a)洋蓟                             b)甜菜\n");
	printf("c)胡萝卜                           q)退出订购\n");
	printf("*****************************************\n");
}