/*2.12.5. ��дһ�������������������
Brazil, Russia, India, China
India, China,
Brazil, Russia
����main()���⣬�ó���Ҫ���������Զ��庯����һ����Ϊbr(),����һ�δ�ӡһ��"Brazil, Russia";
��һ����Ϊic(),����һ�δ�ӡһ��"India, China"������������main()��������ɡ�*/

#include<stdio.h>
int br()
{
	printf("Brazil, Russia");
}
int ic()
{
	printf("India, China");
}
int main(void)
{
	br();
	printf(", ");
	ic();
	printf("\n");
	ic();
	printf(",\n");

	br();

	return 0;
}