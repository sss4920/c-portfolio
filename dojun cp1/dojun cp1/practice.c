/*
문제:두개의 정수를 입력 받아서 최대공약수를 구하는 프로그램을 작성해보자
ex)
두개의 정수입력:6 9
두 수의 최대공약수:3
작성자:김수현
작성일:2019.4.23
*/


#include <stdio.h>
int main()
{
	int a, b,what,big;
	printf("두개의 정수입력:");
	scanf("%d %d", &a, &b);
	what = (a > b) ? b : a;//what은 작은수
	for (int i=1;i<=what;i++)
	{
		if (a%i==0&&b%i==0)
		{
			big = i;

		}

	}
	printf("두 수의 최대공약수:%d", big);






}