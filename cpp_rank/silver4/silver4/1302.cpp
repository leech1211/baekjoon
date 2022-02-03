#include <iostream>
using namespace std;

int main()
{
	int testcase;
	string arr[1001];	//책의 제목
	int num[1001] = { 0, };	//책당 팔린개수
	int best = 0;			//가장많이 팔린 책의 권수
	string bestseller="zzz";		//가장많이팔린 책

	cin >> testcase;
	for (int i = 0; i < testcase; i++)
	{
		cin >> arr[i];
		num[i]++;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])	//같은 책이 있는경우
			{
				num[j]++;
				break;
			}
		}

	}

	for (int i = 0; i < testcase; i++)
	{
		if (num[i] > best)
		{
			best = num[i];
			bestseller = arr[i];	
				
		}
		else if(num[i] == best)				//사전순으로 앞설 시
		{
			if (arr[i] < bestseller)
			{
				bestseller = arr[i];
			}
		}

	}

	cout << bestseller;
}
//팔린 책권수 가 같으면 사전순으로 앞서는 책 출력
