#include <stdio.h>
int main()
{
	char str[100];
	int i = 0;
	scanf("%s", str);
	while (str[i] != '\0')
	{
		i++;
	}
	for (int k = i-1; 0 <= k; k--)
	{
		printf("%c", str[k]);
	}
}