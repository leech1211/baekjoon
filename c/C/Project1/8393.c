#define _CRT_SECURE_NO_WARNINGS //scanf��������
#include <stdio.h>

int main()
{
	int a;
	int sum = 0;
	scanf("%d", &a);

	for (int i = 1; i < a+1; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);

}