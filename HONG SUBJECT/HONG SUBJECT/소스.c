/*
주제:5번
작성자:김수현조
작성일:5.6
주석처리시 VS에서는 일직선상이어서 이해 부탁드립니다. ㅠㅠ
*/
#include <stdio.h>//헤더파일 선언

int main()//main함수 선언
{
	char asc;//문자로 입력받을 것이기 때문에 char형으로 asc 변수선언
	int num;//입력받을 개수받을 변수 num 선언
	printf("알파벳 입력:");//도움말출력
	scanf("%c", &asc);//asc에 문자 입력받기
	printf("개수:");//도움말 출력
	scanf("%d", &num);//num에 개수 입력받기
	for (int i = 1; i <= num; i++)//입력받은 개수만큼 지역변수 i에 저장된수가 증가되면서 반복
	{
		printf("%c %d\n", asc, asc);//아스키코드를 하나는 문자로 하나는 정수로 출력함
		asc++;//출력하고 나서 asc에 저장된 수를 1씩 올리고 반복문 조건 검사 
	}
	return 0;//0을 반환
}