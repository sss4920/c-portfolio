#include <stdio.h>

int main()
{
	int a, b=0;
	int sum=0;
	while (b==0)
	{
		printf("���� ������ �Է��ϼ���: ");
		scanf("%d", &a);
		sum = sum + a;
		if (a == 0) {
			printf("%d", sum);
			break;

		}


	}
	return 0;






}