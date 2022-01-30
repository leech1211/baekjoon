#include <iostream>
using namespace std;

int main()
{
	int testcase;
	int length;
	string finput;
	string filename;

	cin >> testcase;
	
	cin >> finput;

	length = finput.length();

	for (int i = 1; i < testcase; i++)
	{
		cin >> filename;
		for (int j = 0; j < length; j++)
		{
			if (finput[j] != filename[j])
			{
				finput[j] = '?';
			}

		}

	}
	
	cout << finput;
}