/*3.11.8. 在美国的体积测量系统中，1品脱等于2杯，1杯等于8蛊司，1盎司等于2大汤勺，1大汤勺等于3茶勺。
编写一个程序，提示用户输入杯数，并以品脱、盎司、汤勺、茶勺为单位显示等价容量。
思考对于该程序，为何使用浮点类型比整数类型更合适？*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	float cup;
	float pint;    //pint：品脱
	float all_ounce;   //all_ounce:总盎司
	float big_spoons;  //big_spoons:大汤勺
	float teaspoons;   //teaspoons:茶勺
	
	printf("请输入杯数：");
	scanf("%f", &cup);
	pint = cup / 2;
	all_ounce = 8 * cup;
	big_spoons = 2 * all_ounce;
	teaspoons = 3 * big_spoons;
	
	printf("%.3f杯等于%.3f品脱\n", cup, pint);
	printf("%.3f杯等于%.3f盎司\n", cup, all_ounce);
	printf("%.3f杯等于%.3f大汤勺\n", cup, big_spoons);
	printf("%.3f杯等于%.3f茶勺\n", cup, teaspoons);

	return 0;
}