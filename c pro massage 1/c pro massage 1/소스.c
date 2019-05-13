#include <Stdio.h>

int main()
{
	int a,b,c;
	int sum = 0;
	scanf("%d", &a);
	
		
	for (int j = 1; j <= a; j++)
	{
		scanf("%d %d", &b, &c);
		sum = b + c;
	}
	for (int k = 1; k <= a; k++)
	{
		printf("%d", sum);

	}


	





}