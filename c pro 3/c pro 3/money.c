/*
１３.	원화를 입력하면 이에 대응되는 달러를 계산하는 프로그램을 작성하시오. 환전을 위해 달러는 정수로만 계산되고, 잔돈은 원화로 계산한다. 환율은 1070.5인 상수로 설정해야 한다. 잔돈의 소수점 이하는 버린다. 즉, 365.5원을 거슬러야 한다면, 0.5원을 버리고 365원을 거슬러 준다.
(출력 예)
원화(원) 입력: 10000
달러: 9달러
잔돈: 365원
작성자:김수현
작성일:2019.04.22

*/
#include <stdio.h>

int main()
{
	const double exc = 1070.5;
	int won;
	printf("원화(원)입력: ");
	scanf("%d", &won);
	printf("달러 : %d달러\n",(int) (won/exc));
	printf("잔돈 : %d원", (int)(won-exc*(int)(won/exc)));
	return 0;







}