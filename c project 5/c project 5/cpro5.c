#include <stdio.h>
int main()
{
	int a, i=1,j=1,k;
	scanf("%d", &a);
	while (i <= a)
	{
		while (j<=a)
		{
			printf("*");
			j++;

		}
		printf("\n");
		j = 1;
		a--;
	}



}