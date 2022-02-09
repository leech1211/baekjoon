#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <iostream>
#include <algorithm>
using namespace std;

int arr[2250001];	//메인안에 선언하면 프로그램 비정상종료
int main()
{
	int num;
	int temp;

	//cin >> num;
	scanf("%d", &num);
	for (int i = 0; i < num * num; i++)
	{
		//cin >> arr[i];
		scanf("%d", &arr[i]);
	}

	sort(arr, arr + num * num);

	//for (int i = 0; i < num * num; i++)					//bubble
	//{
	//	for (int j = i; j < num * num; j++)
	//	{
	//		if (arr[j] > arr[j + 1])
	//		{
	//			temp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = temp;
	//		}
	//	}
	//}

	/*for (int i = 0; i < num * num; i++)
	{
		cout << arr[i] << " ";
	}*/
	printf("%d", arr[num * num - num]);
	//cout << arr[num * num - num];
}