#include <iostream>
using namespace std;

int main()
{
	int a, b;		//입력받는 수
	int i = 1;
	int check = 0;
	int arr[1000] = { 0, };
	int sum = 0;
	cin >> a >> b;

	while (check < 1000)
	{
		for (int j = 0; j < i; j++)
		{
			if (check >= 1000)
			{
				break;
			}
			arr[check] = i;
			check++;
		}		
		i++;
		//check++;
	}

	/*for (int k = 0 ;k < 1000; k++)
	{
		cout << arr[k] << " ";
	}*/

	for (int k = a-1; k < b; k++)
	{
		sum += arr[k];
	}
	cout << sum;

}