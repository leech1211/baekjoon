#include <iostream>
using namespace std;

int main()
{
	int garo;	//가로
	int sero;	//세로
	int sol = 1;	//결과
	

	cin >> sero;	//세로입력
	cin >> garo;	//가로입력

	if (sero == 1)
	{
		sol = 1;
	}
	else if(sero == 2)
	{
		if (garo <= 7)
		{
			sol = (garo + 1) / 2;
		}
		else
		{
			sol = 4;
		}
	}
	else if (garo < 7)
	{
		if (garo > 4)
		{
			sol = 4;
		}
		else
		{
			sol = garo;
		}
	}
	else
	{
		sol = garo - 2;
	}

	
	

	cout << sol << endl;
	return 0;
}