/*
문제: 총 5개의 정수를 입력받아서 그 수의 합을 출력하는 프로그램
정수는 반드시 1이상이어야 하고 만약 1미만의 수가 입력되면 재입력을 요구 그래서 결국 1이상의 정수 5개를 모두 입력 받을 수 있도록
*/
#include <stdio.h>

int main()
{
	int a,sum=0;
	int i = 1;
	while (i<=5)
	{
		scanf("%d", &a);
		while (a<0)
		{
			printf("재입력 좀:");
			scanf("%d", &a);


		}
		i++;
		sum += a;


	}
	printf("5개의 정수의 합은 %d 입니다", sum);

}