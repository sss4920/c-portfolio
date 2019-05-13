#include <stdio.h>

int main()
{
	int a, i=0;
	int num;
	scanf("%d", &a);
	num = 1000 - a;
	while (num > 0)
	{
		if (num >= 500)
		{
			num -= 500;
			i++;
		}
		else if (num >= 100)
		{
			num -= 100;
			i++;

		}
		else if (num >= 50)
		{
			num -= 50;
			i++;

		}
		else if (num >= 10)
		{
			num -= 10;
			i++;

		}
		else if (num >= 5)
		{
			num -= 5;
			i++;

		}
		else
		{
			num -= 1;
			i++;

		}
	}
	printf("%d", i);
	return 0;
}