#include <stdio.h>
int main(void)
{
	int a, b;
	int sum = 0;
	int i, j;
	scanf("%d %d", &a, &b);
	i = a;
	j = b;
	if (i == 1) sum += j;
	else if (i == 2) sum = 31 + j;
	else if (i == 3) sum = 31 + 28 + j;
	else if (i == 4) sum = 31 + 28 + 31 + j;
	else if (i == 5) sum = 31 + 28 + 31 + 30 + j;
	else if (i == 6) sum = 31 + 28 + 31 + 30 + 31 + j;
	else if (i == 7) sum = 31 + 28 + 31 + 30 + 31 + 30 +j;
	else if (i == 8) sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + j;
	else if (i == 9) sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31+j;
	else if (i == 10) sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + j;
	else if (i == 11) sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + j;
	else if (i == 12) sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 +30 +j;
	if (sum % 7 == 1)
	{
		printf("MON");
	}
	else if (sum % 7 == 2)
	{
		printf("TUE");

	}
	else if (sum % 7 == 3)
	{
		printf("WED");

	}
	else if (sum % 7 ==4)
	{
		printf("THU");

	}

	else if (sum % 7 ==5)
	{
		printf("FRI");

	}
	else if (sum % 7 == 6)
	{
		printf("SAT");

	}
	else if (sum % 7 == 0)
	{
		printf("SUN");

	}
	return 0;
}


