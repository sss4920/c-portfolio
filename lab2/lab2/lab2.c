#include <stdio.h>

int main()
{
	int dan1, dan2,i;//변수선언 dan1,dan2,i
	scanf("%d %d", &dan1, &dan2);//어디부터 어디까지 할건지 두 수 입력받음
	for (i = dan1; i <= dan2; i++)//i에 첫번째 입력수를 넣고 두번째 입력수까지 큰 단을 반복
	{
		for (int j = 1; j <= 9; j++)//세부적으로 1부터 9까지 곱하는거 반복
		{
			printf("%d * %d = %d\n", i, j, i*j);//구구단 출력

		}
		printf("\n");//공백 출력 끝나면 다시 큰 반복문 조건 검사
	}


}