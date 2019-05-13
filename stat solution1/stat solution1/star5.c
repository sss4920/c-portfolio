/*
문제: 다솜누나 팬클럽 별찍기 1
작성자:김수현 (팬클럽 회장^^)
작성일:2019.04.22
*/
#include <stdio.h>
int main(void)
{
	int num,star;// 입력받을 숫자를 저장할 변수 num과 별의 개수를 결정할 star라는 변수를 선언합니다.
	scanf("%d", &num);//num이라는 변수에 입력을 받습니다.
	for (int i=1;i<=num;i++)//i라는 변수에 저장된 수가 num에 저장된 보다 작거나 같을때 밑에 식을 반복합니다.
	{
		for (star=1;star<=i;star++)//star라는 변수에 저장된 값만큼 반복합니다.
		{
			printf("*");//star에 저장된 수 만큼 *을 출력합니다.
		}
		printf("\n");//별을 횟수만큼 찍고나면 개행을 하고 다시 밖의 for문의 조건검사를 합니다.
	}
	return 0;
}