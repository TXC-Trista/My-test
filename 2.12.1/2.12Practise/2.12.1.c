/*2.12.1.c -- 编写一个程序，调用一次printf()函数，把你的姓名打印在一行。
再调用一次printf()函数，把你的姓名分别打印在两行。然后，再调用两次printf()函数，把你的姓名打印在一行。*/


#include<stdio.h> 
int main(void)
{
	printf("%s %s\n", "Trista", "Tang");
	printf("%s\n%s\n", "Trista", "Tang");
	printf("%s", "Trista");
	printf(" %s", "Tang");
	return 0;
}