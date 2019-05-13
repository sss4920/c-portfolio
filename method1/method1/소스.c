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
	printf("세 수를 입력해주세요:");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("가장 큰수는 %d이고, 가장 작은수는 %d입니다.", big(num1, num2, num3), small(num1, num2, num3));



}