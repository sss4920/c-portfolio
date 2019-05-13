/*
조건문 활용해서 입력받은 수가 10보다 큰지 판별 후 출력
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