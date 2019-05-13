#include <stdio.h>

int main()
{
	int a,i,b,sum=0;
	scanf("%d", &a);//a로 개수를 입력받는다
	for (i = 1; i <= a; i++)
	{
		scanf("%1d", &b);
		sum = sum + b;
		
	}
	printf("%d", sum);







}