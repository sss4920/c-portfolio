#include <stdio.h>

int main()
{
	const double exchange = 1070.5;
	int won;
	int dollar;
	int receive;
	printf("��ȭ(��)�Է�:");
	scanf("%d", &won);
	printf("�޷�:");
	scanf("%d�޷�", &dollar);
	printf("�ܵ�:");
	receive =  (int)(won - (exchange * dollar));
	printf("%d��", receive);
	return 0;








}