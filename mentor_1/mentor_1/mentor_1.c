#include <stdio.h>

int main()
{
	int i=1;
	int x = 0;
	int factorior=1;
	int last;
	scanf("%d", &last);
	while (i<=last)
	{
		factorior = factorior * i;
		i += 1;

	
	}
	printf("%d", factorior);
	/*
	for (int j = 0; j < last; j++)
	{



	}
	printf("%d", factorior);
	*/


}