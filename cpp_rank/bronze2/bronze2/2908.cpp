#include <iostream>
using namespace std;

int reverse(int n)
{
	int one, ten, hou;
	hou = n / 100;
	ten = (n / 10) % 10;
	one = n % 10;

	return one * 100 + ten * 10 + hou;
}

int main()
{
	int a, b;
	int na, nb;
	cin >> a >> b;
	na = reverse(a);
	nb = reverse(b);

	if (na > nb)
	{
		cout << na;
	}
	else
	{
		cout << nb;
	}

}