#include <iostream>
using namespace std;

int main()
{
	int kind, sum;
	int* coin;
	int check = 0;		//필요한 동전중 가장 큰 동전
	int share = 0;		//동전의 몫
	int rest = 0;		//나머지
	int result = 0;		//동전의 개수

	cin >> kind;	//동전 종류 입력
	cin >> sum;		//금액입력	

	coin = new int[kind]; //kind만큼 배열

	for (int i = 0; i < kind; i++)
	{
		cin >> coin[i];
	}

	for (int i = kind - 1; i < kind; i--)
	{
		
		if(sum / coin[i] != 0)		//필요한 동전중 가장 큰 동전
		{
			check = i;
			break;
		}
	}

	
	while (sum != 0)
	{
		share = sum / coin[check];
		rest = sum % coin[check];
		sum = rest;
		check--;

		result += share;
	}

	cout << result << endl;



	delete coin;


}