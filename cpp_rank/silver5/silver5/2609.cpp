#include <iostream>
using namespace std;

int bigsRest(int m, int n)
{
	int temp = 1;
	int out;
	while (temp <= m && temp <= n)
	{
		if (m % temp == 0 && n % temp == 0)
		{
			out = temp;
		}
		temp++;
	}
	return out;
}

int smallMul(int m, int n)
{
	int small;
	int temp;
	int out;

	small = m > n ? n : m;
	temp = small;
	while (1)
	{
		if (temp % m == 0 && temp % n == 0)
		{
			out = temp;
			break;
		}
		temp++;
	}
	return out;
}

int main()
{
	int m, n;

	cin >> m >> n;
	cout << bigsRest(m, n) << endl;
	cout << smallMul(m, n) << endl;

}