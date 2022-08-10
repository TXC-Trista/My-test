/*4.8.6. 编写一个程序，先提示用户输入名，然后提示输入姓。
在一行打印用户输入的名和姓，下一行分别打印名和姓的字母数。
字母数要与相应名和姓的结尾对齐，如下所示；
Melissa Honeybee
	  7        8
接下来，再答应相同的信息，但是字母个数与相应名和姓的开头对齐，如下所示：
Melissa Honeybee
7       8
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char name[30];
	char surname[30];
	int len_name;        
	int len_surname;

	printf("请输入您的名：");
	scanf("%s", name);
	len_name = strlen(name);

	printf("请输入您的姓：");
	scanf("%s", surname);
	len_surname = strlen(surname);

	printf("%s %s\n", name, surname);
	printf("%*d %*d\n", len_name, len_name, len_surname, len_surname);

	printf("%s %s\n", name, surname);
	printf("%-*d %-*d\n", len_name, len_name, len_surname, len_surname);

	return 0;
}