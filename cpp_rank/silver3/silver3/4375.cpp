#include <iostream>
using namespace std;

int main()
{
	int input;
	int multiple;
	int sol;

	
	while (cin >> input)
	{
		multiple = 0;
		for (sol = 1; sol < input; sol++)
		{
			multiple = (multiple * 10 + 1) % input;
			if (multiple == 0)
				break;
		}
		cout << sol << endl;
	}
	
}