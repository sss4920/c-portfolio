/*
���࿡ n=10�̶�� 10+1+0��


*/

#include <stdio.h>
int a, b,j,i;
int mm=0;
int sum(int n) {
	mm++;
	j = n;
	a = n / 10;
	b = n % 10;
	n += a + b;
	return sum(n);
	if (n == j)
	{
		printf("%d", n);
	}
	else
	{

	}

	
	return 0;
}

int main()
{
	int k;





}