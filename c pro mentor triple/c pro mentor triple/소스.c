#include <stdio.h>

int main()
{
	int x, y, w, h;
	
	int case1, case2,sum,sum1,sum2;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	case1 = w - x;
	case2 = h - y;
	sum = (w-x > h-y) ? h-y : w-x;
	sum1 = (w-x > x) ? x : w-x;
	sum2 = (case2 > y) ? y : case2;
	sum = ((w - x > h - y) ? h - y : w - x) >((sum1 > sum2) ? sum2 : sum1)? ((sum1 > sum2) ? sum2 : sum1) : (w - x > h - y) ? h - y : w - x;
	printf("%d", sum);
	return 0;







}