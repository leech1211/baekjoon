#include <iostream>
using namespace std;

int main()
{
	int line;		//끊어진 기타줄
	int brand;		//브랜드
	int set, piece;
	int cheapset_s = 1000, cheapest_p = 1000;
	int share, rest;
	int onlyset, mix, onlypiece;
	int temp = 6;	//끊어진 기타줄보다 큰 6의배수

	cin >> line >> brand;
	share = line / 6;
	rest = line % 6;
	
	for (int i = 0; i < brand; i++ )
	{
		cin >> set >> piece;
		
		if (cheapset_s > set)
			cheapset_s = set;
		if (cheapest_p > piece)
			cheapest_p = piece;
	}

	while (1)
	{
		if (temp > line)
			break;
		temp += 6;
	}
	//cout << "temp: " << temp << endl;
	temp = temp / 6;
	onlyset = temp * cheapset_s;
	//cout << "onlyset: " << onlyset << endl;
	mix = share * cheapset_s + rest * cheapest_p;
	//cout << "mix: " << mix << endl;
	onlypiece = line * cheapest_p;
	//cout << "onlypiece: " << onlypiece << endl;

	if (onlyset > mix)
	{
		if (mix > onlypiece)
			cout << onlypiece;
		else
			cout << mix;
	}
	else
	{
		if (onlyset > onlypiece)
			cout << onlypiece;
		else
			cout << onlyset;
	}

}