#include <iostream>
using namespace std;

int main()
{
	int num;
	int* arr;
	int small = 1000000;
	int big = 0;

	cin >> num;

	arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
		if (arr[i] < small)
			small = arr[i];
		if (arr[i] > big)
			big = arr[i];

	}
	

	cout << small * big;

	delete[] arr;
}