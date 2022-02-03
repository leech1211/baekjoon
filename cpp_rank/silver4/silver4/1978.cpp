#include <iostream>
using namespace std;

int main()
{
	int testcase;
	int temp;
	int mini;
	int output = 0;

	cin >> testcase;
	for (int i = 0; i < testcase; i++)
	{
		mini = 2;
		cin >> temp;

		if (temp == 2)
		{
			output++;
		}

		while (mini < temp)
		{
			if (temp % mini == 0)		//나누어 떨어지면 소수가 아님
			{
				break;
			}
			if (mini == temp - 1)		//나누어지는 수 없이 여기까지 왔다면 
			{
				output++;
			}
			mini++;
		}
	}
	cout << output;
}