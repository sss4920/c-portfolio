#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058 //#define 문장을 사용하여 기호상수 선언

int main(void)
{
	double a; 
	printf("평을 입력하세요:");
	scanf("%lf", &a);
	printf("%lf 평방미터입니다.", a*SQMETER_PER_PYEONG); //1평당 제곱미터를 곱해주면 평방미터가 나옴 
	return 0;

}