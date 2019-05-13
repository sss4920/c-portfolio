#include <stdio.h>

int main()
{
	int c=1;
	int p = -1;
	while (c<=100)
	{
		p = -1;
		if ((c%c == 0) && (c % 1 == 0))
		{
			for (int k = c-1; k > 1; k--) {
				if (c%k == 0) {
					p = 1;
					break;
				}
			}
			if (p == -1) printf("%d\n", c);

		}
		c++;
	}




}