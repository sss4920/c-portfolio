#include <stdio.h>

int lower(char s)
{
	int i;
	if (s >= 97) 
	{
		printf("%d��° ȣ�� %c\n", i, s);
		i++;
	}
	else if(s>=65)
	{
		printf("%d��° ȣ�� %c\n2", i, s + 32);
		i++;
	}
}

int main()
{
	char s;
	static int i=1;
	for (int j = 1; j <= 3; j++)
	{
		printf("����: ");
		scanf("%c", &s);
		lower(s);
	}
	



}