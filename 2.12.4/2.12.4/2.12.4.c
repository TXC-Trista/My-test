/*2.12.4. 编写一个程序，生成以下输出：
For he's a jolly good fellow!
For he's a jolly good fellow!
For he's a jolly good fellow!
Which nobody can deny!
除了main()函数以外，该程序还要调用两个自定义函数；
一个名为jolly()，用于打印前3条消息，调用一次打印一次；
另一个函数名为deny()，打印最后一条消息。*/

#include<stdio.h>
int jolly()
{
	printf("For he's a jolly good fellow!\n");
}
int deny()
{
	printf("Which nobody can deny!");
}
int main(void)
{
	jolly();
	jolly();
	jolly();
	deny();
	return 0;
}