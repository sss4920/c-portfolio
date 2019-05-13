/*
문제: 별출력하기 끝판왕 오른쪽 정렬+뒤집어서
작성자: 다솜누나팬클럽 회장 김수현
작성일:2019.4.23
*/
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		for (int j=1;j<i;j++)
		{
			printf(" ");
		}
		for (int k=a;i<=k;)
		{
			printf("*");
		}
		printf("\n");

	}







}