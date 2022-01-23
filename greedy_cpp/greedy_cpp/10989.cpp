#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int num;
	int temp;
	int arr[10001] = {0,};
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &temp);
		arr[temp]++;		
	}

	//sort(arr,arr+num);

	for (int i = 0; i < 10001; i++)
	{
		if (arr[i] != 0)
		{
			do {
				printf("%d \n", i);
				arr[i]--;
			} while( arr[i] != 0);
		}	
	}

	return 0;
}