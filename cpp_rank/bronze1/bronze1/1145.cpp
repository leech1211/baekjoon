#include <iostream>
using namespace std;

int main()
{
	int arr[5];
	int check = 0;
	int drainage = 0;

	for (int k = 0; k < 5; k++)
	{
		cin >> arr[k];
	}

	while (check < 3)
	{
		check = 0;
		drainage++;
		for (int k = 0; k < 5; k++)
		{
			if (drainage % arr[k] == 0)
			{
				check++;
			}
		}

	}

	cout << drainage;
}
