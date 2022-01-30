#include <iostream>
using namespace std;

int print(int arr[])
{
	int temp;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	/*for (int j = 0; j < 10; j++)
	{
		cout << arr[j] << " ";
	}*/

	return arr[7];
}

int main()
{
	int testcase;
	int arr[10];

	cin >> testcase;
	for (int k = 0; k < testcase; k++)
	{
		for (int i = 0; i < 10; i++)
		{
			cin >> arr[i];
		}
		
		cout << print(arr) << endl;
	}
	
}