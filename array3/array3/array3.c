/*
����: ���ܾ �Է¹ް� �Է¹��� ���ܾ �����ϴ� ���� �߿��� �ƽ�Ű �ڵ� ���� ���� ū ���ڸ� ã�Ƽ� ����ϴ� ���α׷��� �ۼ�
*/
#include <stdio.h>

int main()
{
	char str[100];
	int i = 0;
	char asc=0;
	scanf("%s", str);
	while (str[i] != '\0')
	{
		i++;//���� ���� ���Դ�.
	}
	for (int k = 0; k < i; k++)
	{
		if (asc < str[k])
			asc = str[k];
	}
	printf("%c", asc);
}
			
	

