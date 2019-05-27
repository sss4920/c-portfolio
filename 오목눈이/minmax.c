#include <stdio.h>//헤더파일선언


int main()//main 함수 정의
{
	int num[5];//5개의 정수를 저장할 수 있는 배열 선언
	int max=1;//최대값을 저장할 변수 선언 및 초기화
	int min=1;//최소값을 저장할 변수 선언 및 초기화
	for (int i = 0; i < 5; i++)//몇번 방을 나타낼껀지 표현할 변수 i를 초기화 및 증가반복
	{
		printf("정수를 입력해주세요:");//도움말 출력
		scanf("%d",&num[i]);//정수를 입력받아 배열에 저장합니다.
		if (i == 1)//만약 i가 1이면
		{
			max = (num[i] >= num[i - 1]) ? num[i] : num[i - 1];//i가 0번째인 수랑 비교해서 큰수를 max에넣고
			min = (num[i] >= num[i - 1]) ? num[i - 1] : num[i];//i가 0번째인 수랑 비교해서 작은수를 min에 넣고
		}
		else if (i >= 2)//i가 2부터는
		{
			max = (num[i] >= max) ? num[i] : max;//i가 1일때 들어갔던 최대값이랑 i가2,3,4 인 애들이랑 반복하며 계속 비교해서 큰수를 넣음
			min = (num[i] >= min) ? min : num[i];//위와 같은 원리로 계속 비교해서 작은 수를 넣음
		}
	}
	printf("최대값은 %d입니다.\n", max);//max에 저장된 최대값을 출력
	printf("최소값은 %d입니다. ", min);//min에 저장된 최소값을 출력
	return 0;
}
