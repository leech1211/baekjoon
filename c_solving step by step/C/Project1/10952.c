#define _CRT_SECURE_NO_WARNINGS //scanf��������
#include <stdio.h>

int main()
{
	int a, b;
	a = 1;
	b = 1; 
	while (1)
	{
		scanf("%d %d \n", &a, &b);
		
		if (a == 0)
			if (b == 0)
				break;
		printf("%d \n", a + b);
	}
}