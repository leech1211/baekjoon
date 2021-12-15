#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>

int main()
{

	int a;
	int target;
	int max = -1000001, min = 10000001;

	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &target);
		if (max < target)
			max = target;
		if (min > target)
			min = target;
	}

	printf("%d %d", min, max);
}