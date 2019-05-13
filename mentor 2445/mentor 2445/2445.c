#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int star = 1; star <= i; star++)
		{
			printf("*");
		}
		for (int back = 1; back <= n - i; back++)
		{
			printf(" ");
		}
		for (int back = 1; back <= n - i; back++)
		{
			printf(" ");
		}
		for (int star = 1; star <= i; star++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int under = 1; under < n; under++)
	{
		for (int star = n;  1<= star - under; star--)
		{
			printf("*");
		}
		for (int back = 1; back <= under; back++)
		{
			printf(" ");
		}
		for (int back = 1; back <= under; back++)
		{
			printf(" ");
		}
		for (int star = n; 1 <= star - under; star--)
		{
			printf("*");
		}
		printf("\n");
	}
}