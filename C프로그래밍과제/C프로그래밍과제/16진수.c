/*
과제:마일을 입력받으면, 이에 해당하는 m를 출력하시오. 1마일은 1.6Km이다.
작성자:김수현
작성일:2019.3.22
*/
#include <stdio.h>

int main(void)
{
	int a;
	printf("마일을 입력하세요:");
	scanf("%d", &a);
	printf("마일은 %d m입니다", a*1600);




	return 0;
}