#include <stdio.h>

int main()
{
	int i = 0, ten = 0, one = 0;
	int user, result=0;
	int sum = 0;
	int x;
	scanf("%d", &user);
	x = user;
	
		do
		{
			if (user < 10)
			{
				one = user % 10;
				result = one * 10 + one % 10;
				user = result;
				i++;
			}
			else
			{
				ten = user / 10;
				one = user % 10;
				sum = ten + one;
				result = one * 10 + sum % 10;
				user = result;
				i++;
			}
		} while (x != result);

		printf("%d", i);

	return 0;
}