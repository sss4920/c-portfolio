/*
문제: 별 뒤집어 출력하기
*****
****
***
**
*
작성자:다솜누나팬클럽 회장 김수현^^
작성일:2019.4.23
*/
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; a--)
	{
		for (int k = 1;k<=a ; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}