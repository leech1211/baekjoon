#define _CRT_SECURE_NO_WARNINGS //scanf��������
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