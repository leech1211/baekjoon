#include <iostream>
using namespace std;

int main()
{
	int time;	//실행횟수
	int floor, room;	//층,호실



	int arr[15][15];

	for (int j = 1; j < 16; j++)		//0층 세팅
	{
		arr[0][j-1] = j;
	}
	for (int i = 1; i < 15; i++)
	{
		arr[i][0] = 1;		//1호는 항상 1명
		
		for (int j = 1; j < 15; j++)
		{
			arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
		}
	}

	cin >> time;
	for (int i = 0; i < time; i++)
	{
		cin >> floor >> room;
	

		cout << arr[floor][room - 1] << endl;
	}
	return 0;
}