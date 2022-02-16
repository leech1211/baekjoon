#include <iostream>
using namespace std;

int zero(int n)
{
	int rest;
	int zero = 0;
	while (n != 0)
	{
		rest = n % 10;
		n = n / 10;
		if (rest == 0)
			zero++;
	}
	return zero;
}

int main()
{
	int num;
	int N, M;
	int temp = 0;
	int out;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		out = 0;
		cin >> N >> M;
		temp = N;
		while (temp < M + 1)
		{
			out += zero(temp);
			if (temp == 0)
			{
				out++;
			}
			temp++;
		}
		cout << out << endl;
	}
}