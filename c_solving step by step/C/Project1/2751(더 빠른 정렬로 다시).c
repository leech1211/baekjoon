#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int array[1000001];

void quick(int* data, int start, int end)
{
	if (start >= end)
	{
		return;		//start�� end���� ũ�ų� �������� ��Ұ� 1���� ���
	}
	int pibut = start;	//�ǹ�
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
		if (i > j)	//�����ȴٸ� �������� �ǹ��� ��ü
		{
			temp = data[pibut];
			data[pibut] = data[j];
			data[j] = temp;
		}
		else		//�������� �ʾҴٸ� ���� �ٲپ���
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