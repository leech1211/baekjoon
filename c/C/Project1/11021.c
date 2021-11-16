#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>

int main()
{
	int a;
	int one, two;

	scanf("%d \n", &a);

	for (int i = 0; i < a; i++)
	{
		scanf("%d %d \n", &one, &two);
		printf("Case #%d: %d \n", i + 1, one + two);
	}
}