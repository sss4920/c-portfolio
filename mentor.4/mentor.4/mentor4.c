/*
���ǹ� Ȱ���ؼ� �Է¹��� ���� 10���� ū�� �Ǻ� �� ���
w
*/

#include <Stdio.h>
int fac(int a) {
	if (a == 1) return 1;
	return a*fac(a-1);
}
int main()
{
	int a[] = { 1,2,3 };
	printf("%d",a);
	
}