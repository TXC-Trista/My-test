/*5.11.4. ��дһ��������ʾ�û�����һ����ߣ���λ�����ף������ֱ������׺�Ӣ��Ϊ��λ��ʾ��ֵ��
������С�����֡�����Ӧ�������û��ظ��������ߣ�ֱ���û�����һ������ֵ�������ʾ�����£�
Enter a height in centimeters��182
182.0 cm = 5 feet, 11.7 inches
Enter a height in centimeters(<= 0 tu quit)��168.6
168.6 cm = 5 feet, 6.4 inches
Enter a height in centimeters(<= 0 tu quit)��0
bye
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define FEET_TO_INCHES 12    //1Ӣ�� = 12Ӣ��
#define CM_TO_INCHES 0.394   //1���� = 0.394Ӣ��
int main(void)
{
	float height, all_inches, feet, left_inches;
	printf("Enter a height in centimeters��");
	scanf("%f", &height);
	while (height > 0)
	{
		all_inches = CM_TO_INCHES * height;
		feet = (int)(all_inches / FEET_TO_INCHES);   //��feet��ֵ���float���͵�����
		left_inches = all_inches - (FEET_TO_INCHES * feet);
		
		printf("%.1f cm = %.f feet, %.1f inches\n", height, feet, left_inches);
		//�� printf("%.1f cm = %d feet, %.1f inches\n", height, (int)feet, left_inches);
		printf("Enter a height in centimeters(<= 0 tu quit)��");
		scanf("%f", &height);
	}
	printf("bye\n");
	return 0;
}