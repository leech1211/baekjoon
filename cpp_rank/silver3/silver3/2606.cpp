#include <iostream>
using namespace std;

int main()
{
	int com, link;
	bool* infection;
	long long* from;
	long long* to;
	int index = 0,temp;
	int output = 0;

	cin >> com;
	cin >> link;

	infection = new bool[com + 1];	//몇번 컴퓨터는 감염되었는가
	from = new long long[link + 1];
	to = new long long[link + 1];

	for (int i = 0; i < link; i++)
	{
		cin >> from[i] >> to[i];
	}
	for (int i = 0; i < com; i++)					//모든컴퓨터는 감염되지 않은 상태
	{
		infection[i] = false;
	}
	infection[0] = true;							//1번 감염



	for (int i = 0; i < com; i++)
	{
		for (int j = 0; j < link; j++)
		{
			//if (infection[i] == true)				//1번부터 컴퓨터가 감염되었는지 전부확인
			{
				if (infection[from[j] - 1] == true)				//감염된 컴퓨터와 연결된 경우
				{
					infection[to[j] - 1] = true;
				}
				else if (infection[to[j] - 1] == true)
				{
					infection[from[j] - 1] = true;
				}
			}
		}
	}	

	for (int i = 0; i < com; i++)
	{
		//cout << i << ": " << infection[i] << endl;
		if (infection[i] == true)
		{
			output++;
		}
	}

	cout << output - 1;								//1번컴퓨터 제외


	delete[] infection;
	delete[] from;
	delete[] to;
}