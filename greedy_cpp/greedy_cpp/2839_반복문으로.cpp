#include <iostream>
using namespace std;

int main()
{
	int sugar; //설탕봉지의 개수
	int five, three; //5kg봉지와 3kg봉지의 개수
	int rest;	//딱 떨어지지 않고 나머지가 생길경우 -1 출력
	int min=10000000;	//조합의 경우중 가장 작은수
	int i = 0;
	int j = 0;

	cin >> sugar;
	five = 0;
	three = 0;


	//설탕의 무게가 3,5의 합으로 만들 수 없으면 -1
	for (i = 0; i * 5 + j * 3 <= sugar; i++)
	{
		
		for (j = 0; i * 5 + j * 3 <= sugar; j++)
		{
			if (i * 5 + j * 3 == sugar)	//3과5의조합으로 설탕의무게가 나온다면
			{
				//cout << "i: " << i << "j: " << j << endl;
				if (i + j < min)
				{
					min = i + j;
				}
			}
		}
		j = 0;
	}

	if(min == 10000000)		//min 이 변경이 없는경우
	{
		cout << "-1" << endl;
	}
	else                    //조합의 경우의 수 중 가장 작은 값 출력
	{
		cout << min << endl;
	}	
	return 0;

}