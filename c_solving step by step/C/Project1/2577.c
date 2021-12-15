#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>

int main()
{
	int a, b, c;
	int mul;
	int arr[10] = { 0, };
	int temp;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	mul = a * b * c;

	while (mul > 0)
	{
		temp = mul % 10;
		mul = mul / 10;
		arr[temp]++;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", arr[i]);
	}
}