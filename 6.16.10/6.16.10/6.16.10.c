/*6.16.10. ��дһ������Ҫ���û�����һ������������һ��������������������޵����޷�Χ������������ƽ���ͣ�
����ʾ��������Ȼ����������ʾ�û��������޺���������������ʾ�����ֱ���û�����������������ڻ�С����������Ϊֹ��
���������ʾ�����£�
Enter lower and upper integer limits: 5 9
The sums of the squares from 25 to 81 is 255
The next set of limits: 3 25
The sums of the squares from 9 to 625 is 5520
The next set of limits: 5 5
Done
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int x = 0;   //����
	int y = 0;   //����
	int n = 0;
	int sum = 0;
	printf("Enter lower and upper integer limits: ");
	scanf("%d %d", &x, &y);
	while (x < y)
	{
		for (n = x; ((n >= x) && (n <= y)); n++)
			sum += (n * n);
		printf("The sums of the squares from %d to %d is %d\n", x * x, y * y, sum);
		sum = 0;
		printf("The next set of limits: ");
		scanf("%d %d", &x, &y);
	}
	printf("Done\n");
	return 0;
}