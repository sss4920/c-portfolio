/*
1�� �������� ���ϱ� �����Ͽ� n������ ������ ���� 10000���� Ŀ���� ù��° n�� ���Ͻÿ�
*/
#include <stdio.h>

int main()
{
	int N=1;
	int sum = 0;
	for (N = 1; sum < 10000; N++)//i=1���� �����ؼ� sum�� 10000���� ������������ �ݺ��ϰ� i++�� �ؼ� i�� ���� ���������ݴϴ�.
	{
		sum += N * N;//sum���� ������ ���� ��� �����ݴϴ�.
		printf("%d\n", sum);
	}
	
	printf("���ʷ� 10000�Ѵ� ���� %d �Դϴ�.", N-1);






}