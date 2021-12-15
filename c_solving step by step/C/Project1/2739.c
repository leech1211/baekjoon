#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d \n", a, i, a * i);
	}
}