#include <stdio.h>

int main()
{
	const double exchange = 1070.5;
	int won;
	int dollar;
	int receive;
	printf("원화(원)입력:");
	scanf("%d", &won);
	printf("달러:");
	scanf("%d달러", &dollar);
	printf("잔돈:");
	receive =  (int)(won - (exchange * dollar));
	printf("%d원", receive);
	return 0;








}