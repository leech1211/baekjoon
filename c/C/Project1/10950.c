#define _CRT_SECURE_NO_WARNINGS //scanf��������
#include <stdio.h>

int main()
{
	int a;
	int one, two;
	scanf("%d", &a);

	for (int i = 0; i < a; i++)
	{
		scanf("%d %d", &one, &two);
		printf("%d \n",one + two);
		one = 0;
		two = 0;
	}
}