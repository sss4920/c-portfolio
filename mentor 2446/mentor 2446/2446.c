#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int back = 1; back <= i - 1; back++)
		{
			printf(" ");
		}
		for (int star=1;star<= 2 * n - (2 * (i - 1) + 1);star++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < n; i++)
	{
		for (int back = (n-1) - i; 1 <= back; back--)
		{
			printf(" ");
		}
		for (int star = 1; star <= 2 * (i+1) - 1; star++)
			printf("*");
		printf("\n");

	}



}
