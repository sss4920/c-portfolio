/*
아래의 출력을 보이는 프로그램을 작성하자
*
o*
oo*
ooo*
oooo*
작성자:김수현
작성일:2019.04.11
*/



#include <stdio.h>
int main()
{
	int a=4, i=0;//세로줄 세팅할 변수들 
	int circle=1;//o를 증가시킬 변수 circle
	while (i<=a)//세로로 반복해줄 while
	{	
		/*for (circle = 1;circle<=i;circle++) {
			printf("o");


			}
			*/
		circle = 1;
		while (circle<= i)
		{
		
			printf("o");
			circle++;


		}
		printf("*");
		i++;
		printf("\n");
		




	}


}