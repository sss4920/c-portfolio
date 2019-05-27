#include <stdio.h>

int main()
{
	char word[101];
	int i = 0;
	scanf("%s", word);
	while(word=='\0')
	{
		printf("%c", word[i]);
		if (i % 10 == 0)
		{
			if (i == 0)
				continue;
			printf("\n");
		}
	}
}