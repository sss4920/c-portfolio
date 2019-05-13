/*
문제:프로그램 사용자로부터 입력 받은 숫자에 해당하는 구구단을 출력하되, 역순으로 출력하는 프로그램을 작성해보자
작성자: 김수현
작성일: 2019.04.10
*/

#include <stdio.h>

int main()
{
	int a,b=9;
	printf("몇단을 입력할까요?:");
	scanf("%d", &a);
	while (b>=1)
	{
		printf("%d * %d = %d\n", a, b, a*b);
		b--;//b=b-1;



	}
	return 0;




}