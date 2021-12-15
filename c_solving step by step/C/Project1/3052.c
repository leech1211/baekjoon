#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>

int main()
{
	int a; //입력받는 수
	int left; //나머지
	int arr[42] = { 0, };
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		left = a % 42;
		arr[left]++;

	}
	for (int j = 0; j < 42; j++)
	{
		if (arr[j] != 0)
			count++;
	}

	printf("%d", count);
}