#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>

int main()
{
	int a;
	double arr[999] = { 0, };
	double max = 0;
	double sum = 0;

	scanf("%d", &a);

	for (int i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);

		if (arr[i] > max)
		{
			max = arr[i];
		}
	}


	for (int i = 0; i < a; i++)
	{
		arr[i] = (arr[i] / max) * 100.0;
	}

	for (int i = 0; i < a; i++)
	{
		sum += arr[i];
	}

	printf("%.2lf", sum / a);


}