#include <stdio.h>

int big(int num1, int num2, int num3)
{
	int result;
	result = (((num1 > num2) ? num1 : num2) > num3) ? ((num1 > num2) ? num1 : num2) : num3;
	return result;
}

int small(int num1, int num2, int num3)
{
	int result;
	result = (((num1 > num2) ? num2 : num1) > num3) ? num3 : ((num1 > num2) ? num2 : num1);
	return result;
}



int main()
{
	int num1, num2, num3;
	printf("�� ���� �Է����ּ���:");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("���� ū���� %d�̰�, ���� �������� %d�Դϴ�.", big(num1, num2, num3), small(num1, num2, num3));



}