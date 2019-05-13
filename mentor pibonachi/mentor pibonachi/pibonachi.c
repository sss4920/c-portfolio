#include <stdio.h>

int main()
{
	int a=0, b=1, c,num;
	scanf("%d", &num);
	printf("%d %d ", a, b);
	for (int i = 1; i <= num; i++) {
		c = a + b;
		printf("%d ", c);
		a = b;
		b = c;
	}
}