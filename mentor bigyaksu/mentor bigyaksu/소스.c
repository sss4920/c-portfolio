#include <stdio.h>

int main()
{
	int a, b, big,small,i=1;
	int num1, num2, num3,num4=1;
	scanf("%d %d", &a, &b);
	small = (a < b) ? a : b;
	for (i=small; i >0 ; i--)
		if (a%i == 0 && b%i == 0)
			break;
	printf("최대공약수:%d", i);
	num3 = a / i;
	num4 = b / i;
	printf("최소공배수:%d", i*num3*num4);
}