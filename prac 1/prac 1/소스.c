#include <stdio.h>

int main()
{
	int a[5];
	int i=0;
	int max = 0;
	int small = 0;
	int sum = 0;
	scanf("%d %d %d %d %d", &a[0],&a[1],&a[2],&a[3],&a[4]);
	printf("%d", a[0]);
	for (i = 0; i < 5; i++)
	{
		if (a[0] <= a[1])
		{
			max = a[1];
			small = a[0];
		}
		else {
			max = a[0];
			small = a[1];
		}
		if ((i>=1&&(i+1)<5) && a[i + 1] <= a[i])
		{
			max = a[i];
			small = a[i + 1];
		}
		else if ((i >= 1 && (i + 1) < 5) && a[i] <= a[i+1])
		{
			small = a[i];
			max = a[i + 1];
		}
		sum += a[i];
	}
	printf("최댓값: %d, 최소값 : %d , 모든 합: %d", max, small, sum);





}