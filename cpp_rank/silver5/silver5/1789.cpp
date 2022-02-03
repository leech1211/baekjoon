#include <iostream>
using namespace std;

int main()
{
	long input;
	int temp = 1;
	int output = 0;

	cin >> input;

	while (1)
	{
		input -= temp;
		temp++;
		output++;
		if (input < temp)
			break;
	}
	cout << output;
}