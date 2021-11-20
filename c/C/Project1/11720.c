#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>

int main()
{
	int length;
	int sum = 0;
	char arr[100] = { 0, };

	scanf("%d", &length);
	scanf("%s", &arr);
	
	for (int i = 0; i < length; i++)
	{	
		sum += (arr[i]) - 48;
	}

	printf("%d", sum);
}