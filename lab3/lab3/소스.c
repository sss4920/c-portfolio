#include <stdio.h>//������ϼ���

int big(int num1,int num2);//������ Ÿ�Լ���

int main()//main�Լ� ����
{
	int num1, num2;//num1,num2 ��������
	printf("�ΰ��� �����Է�:");//�������
	scanf("%d %d", &num1, &num2);//�μ��Է¹ޱ�
	printf("�μ��� �ִ�����:%d", big(num1, num2));//�μ��� �ִ� ������� �Ű������� �Է¹��� �μ��ְ� �Լ����� ���� �� ���
}

int big(int num1, int num2)//�ִ����� �Լ����� �Ű����� num1,num2�� ����
{
	int i, small,bignum;//1�� �÷��� i�� �μ��� ���� ���� ���� small, �ִ������� ������ bignum�� ����
	small = (num1 <= num2) ? num1 : num2;//�μ��� �������� small�� ����
	for (i = 1; i <= num1; i++)//�ִ������� �� ���� ���� ���� ���� �� �����Ƿ� 1�� ������Ű�鼭 ���������� ����
	{
		if (num1%i == 0 && num2%i==0)//���� �� ���� ����̸�
			bignum = i;//�� ���� bignum�� ���� �ݺ��� ������ �ִ������� �����
		else//�ƴϸ�
			continue;//�ݺ������� ���ư� else�� ��� �������.
	}
	return bignum;//�ִ������� ��ȯ
}