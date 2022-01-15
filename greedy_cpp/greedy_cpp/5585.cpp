#include <iostream>
using namespace std;

int main()
{
	int pay;		//ÁöºÒÇÒ µ·
	
	int sum = 0;		//ÀÜµ·ÀÇ °³¼ö
	int share;		//¸ò
	


	cin >> pay;
	pay = 1000 - pay;		//°Å½º¸§µ·ÀÇ ±İ¾×

	share = pay / 500;
	sum += share;
	pay = pay % 500;

	share = pay / 100;
	sum += share;
	pay = pay % 100;

	share = pay / 50;
	sum += share;
	pay = pay % 50;

	share = pay / 10;
	sum += share;
	pay = pay % 10;

	share = pay / 5;
	sum += share;
	pay = pay % 5;

	share = pay / 1;
	sum += share;
	pay = pay % 1;

	cout << sum;

	return 0;

}