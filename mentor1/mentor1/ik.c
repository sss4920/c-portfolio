#include <stdio.h>

static int a;
void star(int num)
{
	int k = 1;
	if (num == 0) 
		return;
	while (k <= a - (num - 1)) {
		printf("*");
		k++;
	}
	printf("\n");
	star(num- 1);
}
int main()
{
	
	scanf("%d", &a);
	star(a);
}