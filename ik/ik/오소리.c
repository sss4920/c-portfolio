#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058 //#define ������ ����Ͽ� ��ȣ��� ����

int main(void)
{
	double a; 
	printf("���� �Է��ϼ���:");
	scanf("%lf", &a);
	printf("%lf �������Դϴ�.", a*SQMETER_PER_PYEONG); //1��� �������͸� �����ָ� �����Ͱ� ���� 
	return 0;

}