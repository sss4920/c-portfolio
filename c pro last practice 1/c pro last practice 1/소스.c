#include <stdio.h>

int main()
{
	int a,i=1,j=1;
	scanf("%d", &a);
	while (i<=a)
	{
		while (j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
		j = 1;

	}
}