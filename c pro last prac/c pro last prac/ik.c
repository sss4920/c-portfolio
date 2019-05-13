/*
문제: 0이상 100이하의 정수 중에서 짝수의 합을 출력하는 프로그램, do while 기반으로 하고 덧셈의 결과가 2550
*/
#include <stdio.h>
int main()
{
	int sum = 0;
	int i = 0;
	do
	{
		sum += i * 2;
		i++;



	} while (i <= 50);
	printf("합은 %d입니다.", sum);
}