/*
문제:*찍기
작성자:김수현
작성일:2019.04.11
*/

#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1;j<=i;j++)
		{
			printf("*");

		}
		printf("\n");


	}








}