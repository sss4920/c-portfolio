/*
����:���α׷� ����ڷκ��� �Է¹��� ������ ����� ����ϴ� ���α׷��� �ۼ��ϵ� ���� �ΰ��� ������ �������Ѿ��Ѵ�.
���� ��� ������ �Է��� ������ ����ڿ��� ���´�. �׸��� �� ����ŭ ������ �Է¹޴´�. ��հ��� �Ҽ������ϱ��� ����ؼ� ����Ѵ�.
�ۼ���:�����
�ۼ���:2019.04.10
*/

#include <stdio.h>

int main()
{
	int a,b,sum=0,i=1;
	printf("��� ������ �Է��ҷ�?:");
	scanf("%d", &a);
	while (i<=a)
	{
		scanf("%d", &b);
		sum = sum + b;
		i++;
	}
	printf("����� ������ٰ� !!!:%f", (double)sum / a);









}
