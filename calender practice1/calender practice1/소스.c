/*
문제: 2007년1월1일 월요일이다. 그렇다면 2007년 x월 y일은 무슨 요일일까?


*/



#include <stdio.h>

int main()
{
	int n=1;
	int a=(1<=a&&a<=12);
	int b=(1<=b&&b<=31);

	scanf("%d %d",&a,&b);//월이랑 일을 받았다. 
	
	for (n = 1; n <= 6; n++)
	{
		if (a = 2 * n - 1)
		{
			b = (1 <= b && b <= 31);
		}
		else if (a = 2)
		{
			b = (1 <= b && b <= 28);

		}
		else
		{
			b = (1 <= b && b <= 30);
		}
		
	}
	






}