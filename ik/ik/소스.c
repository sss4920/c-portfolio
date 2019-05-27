# include <stdio.h>

int soo(int *a,int b);


int main()
{
	int a, b;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d", &b);
	printf("a는 %d이고 b는 %d",soo(&a,b),a);
}

int soo(int *a,int b)
{
	a = b;
	return a;
}