#include <stdio.h>

int main()
{
	char a;
	int n,i=1;
	printf("알파벳 입력:");
	scanf("%c", &a);
	printf("개수:");
	scanf("%d", &n);
	while (i <= n)
	{
		printf("%d\n", a);
		i++;
		a++;
	}
	








}