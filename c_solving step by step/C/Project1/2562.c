#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>

int main()
{
	int arr[9] = { 0, };
	int max = 0;
	int num = 1;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
		if (max < arr[i])
		{
			max = arr[i];
			num = i;
		}

	}

	num++;

	printf("%d\n", max);
	printf("%d\n", num);
}