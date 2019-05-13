#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		for (int j = num - 1; j >= i; j--)
		{
			printf(" ");
		}
		for (int k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i <=num-1; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (int k=1;k<=2*(num-i)-1;k++)
			printf("*");
		printf("\n");
	}
}