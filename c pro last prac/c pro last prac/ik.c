/*
����: 0�̻� 100������ ���� �߿��� ¦���� ���� ����ϴ� ���α׷�, do while ������� �ϰ� ������ ����� 2550
*/
#include <stdio.h>
int main()
{
	int sum = 0;
	int i = 0;
	do
	{
		sum += i * 2;
		i++;



	} while (i <= 50);
	printf("���� %d�Դϴ�.", sum);
}