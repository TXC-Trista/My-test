/*2.12.8. ��C�����У��������Ե�����һ����������дһ�����򣬵���һ����Ϊone_three()�ĺ�����
�ú�����һ�д�ӡ����"one"���ٵ��õ�2������two()��Ȼ������һ�д�ӡ����"three"��
two()������һ����ʾ����"two"��main()����ǰҪ��ӡ����"starting now:"�����ڵ�����Ϻ���ʾ����"done!"��
��ˣ��ó�������Ӧ������ʾ��
starting now:
one
two
three
done!
*/

#include<stdio.h>
int one_three()
{
	printf("one\n");
}
int two()
{
	printf("two\n");
}

int main(void)
{
	printf("starting now:\n");
	one_three();
	two();
	printf("three\n");
	printf("done!\n");
	return 0;
}