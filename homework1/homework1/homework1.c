#include <stdio.h>

int lower(char s)
{
	int i;
	if (s >= 97) 
	{
		printf("%d번째 호출 %c\n", i, s);
		i++;
	}
	else if(s>=65)
	{
		printf("%d번째 호출 %c\n2", i, s + 32);
		i++;
	}
}

int main()
{
	char s;
	static int i=1;
	for (int j = 1; j <= 3; j++)
	{
		printf("문자: ");
		scanf("%c", &s);
		lower(s);
	}
	



}