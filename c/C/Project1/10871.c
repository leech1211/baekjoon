#define _CRT_SECURE_NO_WARNINGS //scanf��������
#include <stdio.h>

int main()
{
	int n, x;
	int temp;
	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++)
	{
		scanf("%d ", &temp);
		if (temp < x)
			printf("%d ", temp);
		
	}
}