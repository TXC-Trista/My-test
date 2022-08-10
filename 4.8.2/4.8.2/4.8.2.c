/*4.8.2. 编写一个程序，提示用户输入名和姓，并执行以下操作：
a. 打印名和姓，包括双引号；
b. 在宽度为20的字段右端打印名和姓，包括双引号；
c. 在宽度为20的字段左端打印名和姓，包括双引号；
d. 在比姓名宽度宽3的字段中打印名和姓。*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char name[50];            //name：名
	char surname[30];         //surname：姓 
	int a = 0, b = 0;         
	
	printf("请输入您的名：");
	scanf("%s", name);
	a = strlen(name);        //a是名字的字符长度

	printf("请输入您的姓：");
	scanf("%s", surname);
	b = strlen(surname);     //b是姓的字符长度

	// printf()的*修饰符的作用和scanf()的*修饰符的作用不同
	
	printf("\"%s %s\"\n", name, surname);

	printf("\"%0*s %s\"\n", 20 + a, name, surname);    
	//此处*的意思是：把后面对应的 20+a 参数传给*使用，如果a=4，则%*s就是%24s
	//即把20+a传递给*使用，把name传递给第1个s使用，把surname传递给第2个s使用
	//即是printf("\"%24s %s\"\n", 20 + a, name, surname);
	//输出结果为"                    name surname"，怎么验证前面的空格有20字段？
	//在 %*s 的 * 前加个0变成 %0*s，前面的空格就会被0代替，可数一数有多少个0
	//即：printf("\"%0*s %s\"\n", 20 + a, name, surname)
	
	printf("\"%-*s %-*s\"\n", a, name, 20 + b, surname);
	//把参数a传递给第1个*使用，name传递给第1个s使用
	//20+b传递给第2个*使用，surname传递给第2个s使用

	printf("\"%0*s %s\"\n", a+3, name, surname);
	//把参数a+3传递给*使用，把name传递给第1个s使用，把surname传递给第2个s使用

	return 0;
}