#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);

	for (int i = 1; i < a + 1; i++)
	{
		for (int j = a-1; j + 1 > i; j--)
		{
			printf(" ");
		}
		for (int k = 0; k < i ; k++)
		{
			printf("*");
		}
		printf("\n");
	}


}