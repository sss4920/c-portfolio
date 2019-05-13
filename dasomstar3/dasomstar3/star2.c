/*
문제: 삼항연산자를 이용한 구구단 출력하기
작성자:다솜누나팬클럽회장 김수현
작성일:2019.4.23
*/


#include <stdio.h>
int main()
{
	int num1, num2,what,wh,i=1;
	printf("구구단을 입력하세요:");
	scanf("%d %d", &num1, &num2);
	what = (num1 > num2) ? num1 : num2;//what은 큰수
	wh = (num1 > num2) ? num2 : num1;//wh는 작은수
	printf("작은 수는 %d이고 큰수는 %d 이니 작은수부터 큰수까지 구구단을 외우면\n", wh, what);
	while (wh <= what)
	{
		printf("%d단\n", wh);
		while (i <= 9)
		{
			printf("%d * %d = %d\n", wh, i, wh*i);
			i++;
		}
		wh++;
		i = 1;
	}





}