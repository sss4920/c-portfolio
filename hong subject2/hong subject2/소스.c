/*
주제: 6번문제 풀이
작성일:5.6
작성자:김수현조
주석 개행 vs에서는 일직선입니다. 양해 부탁드립니다.
*/

#include <stdio.h>//헤더파일선언

int main()//main함수 선언
{
	int num1, num2;//변수 num1과 num2를 선언합니다
	while (1)//무한루프를 만듭니다
	{
		scanf("%d %d",&num1,&num2);// num1과 num2에 두수를 입력받습니다
		if (num1==0&&num2==0)//조건검사를 하여 만약 입력받은 수가 0 0이면 
		break;//반복을 중단합니다
		printf("%d\n", num1 + num2);//합을 출력하고 조건검사를 다시합니다.
		
	}
	return 0;
}