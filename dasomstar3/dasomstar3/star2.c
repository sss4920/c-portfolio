/*
����: ���׿����ڸ� �̿��� ������ ����ϱ�
�ۼ���:�ټش�����Ŭ��ȸ�� �����
�ۼ���:2019.4.23
*/


#include <stdio.h>
int main()
{
	int num1, num2,what,wh,i=1;
	printf("�������� �Է��ϼ���:");
	scanf("%d %d", &num1, &num2);
	what = (num1 > num2) ? num1 : num2;//what�� ū��
	wh = (num1 > num2) ? num2 : num1;//wh�� ������
	printf("���� ���� %d�̰� ū���� %d �̴� ���������� ū������ �������� �ܿ��\n", wh, what);
	while (wh <= what)
	{
		printf("%d��\n", wh);
		while (i <= 9)
		{
			printf("%d * %d = %d\n", wh, i, wh*i);
			i++;
		}
		wh++;
		i = 1;
	}





}