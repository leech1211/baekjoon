#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int array[1000001];

void quick(int* data, int start, int end)
{
	if (start >= end)
	{
		return;		//start가 end보다 크거나 같은경우는 요소가 1개인 경우
	}
	int pibut = start;	//피벗
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j)
	{
		while (data[i] <= data[pibut])
		{
			i++;
		}
		while (data[j] >= data[pibut] && j > start)
		{
			j--;
		}
		if (i > j)	//엇갈렸다면 작은값과 피벗을 교체
		{
			temp = data[pibut];
			data[pibut] = data[j];
			data[j] = temp;
		}
		else		//엇갈리지 않았다면 둘이 바꾸어줌
		{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	quick(array, start, j - 1);
	quick(array, j + 1, end);
	
}

int main()
{
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &array[i]);
	}
	quick(array, 0, num-1);

	for (int i = 0; i < num; i++)
	{
		printf("%d\n", array[i]);
	}
	
}