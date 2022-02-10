#include <iostream>
using namespace std;

int main()
{
	int m, n, divisor = 1, temp = 1;
	char col;

	cin >> m >> col >> n;
	
	while (temp <= m && temp <= n)
	{
		if (m % temp == 0 && n % temp == 0)
		{
			divisor = temp;
		}
		temp++;
	}
	//cout << divisor;
	cout << m / divisor << col << n / divisor;
}