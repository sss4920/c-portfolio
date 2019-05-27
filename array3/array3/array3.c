/*
문제: 영단어를 입력받고 입력받은 영단어를 구성하는 문자 중에서 아스키 코드 값이 가장 큰 문자를 찾아서 출력하는 프로그램을 작성
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
		i++;//문자 길이 나왔다.
	}
	for (int k = 0; k < i; k++)
	{
		if (asc < str[k])
			asc = str[k];
	}
	printf("%c", asc);
}
			
	

