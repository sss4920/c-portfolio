#include <stdio.h>//헤더파일선언

int big(int num1,int num2);//프로토 타입선언

int main()//main함수 정의
{
	int num1, num2;//num1,num2 변수선언
	printf("두개의 정수입력:");//도움말출력
	scanf("%d %d", &num1, &num2);//두수입력받기
	printf("두수의 최대공약수:%d", big(num1, num2));//두수의 최대 공약수를 매개변수로 입력받은 두수넣고 함수에서 얻은 값 출력
}

int big(int num1, int num2)//최대공약수 함수정의 매개변수 num1,num2를 받음
{
	int i, small,bignum;//1씩 늘려줄 i와 두수중 작은 수를 넣을 small, 최대공약수를 저장할 bignum을 선언
	small = (num1 <= num2) ? num1 : num2;//두수중 작은값을 small에 저장
	for (i = 1; i <= num1; i++)//최대공약수는 두 수중 작은 값을 넘을 수 없으므로 1씩 증가시키면서 작은값까지 실행
	{
		if (num1%i == 0 && num2%i==0)//만약 두 수의 약수이면
			bignum = i;//그 수를 bignum에 저장 반복문 끝나면 최대공약수가 저장됨
		else//아니면
			continue;//반복문으로 돌아감 else는 없어도 상관없다.
	}
	return bignum;//최대공약수를 반환
}