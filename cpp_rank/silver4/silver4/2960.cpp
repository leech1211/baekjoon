#include <iostream>
using namespace std;

int main()
{
	int n, k;
	int temp = 2;
	int* arr;
	bool* del;
	int output = 0;
	int sol = 0;
	cin >> n >> k;

	arr = new int[n];
	del = new bool[n];
	for (int i = 1; i < n; i++)
	{
		arr[i] = temp;
		del[i] = true;
		temp++;
	}

	temp = 2;
	while (1)
	{
		if (output == k)
			break;
		for (int i = temp - 1 ; i < n; )
		{
			if (output == k)
				break;
			if (arr[i] % temp == 0)
			{
				if (del[i] == true)
				{
					del[i] = false;
					output++;
					sol = arr[i];
				}
			}
			i += temp;
		}
		temp++;
	}
	/*for (int i = 1; i < n; i++)
	{
		cout << arr[i] << " ";
	}*/
	cout << sol;
	
	delete[] arr;
	delete[] del;
}