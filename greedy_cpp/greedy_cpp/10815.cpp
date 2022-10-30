#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int	cardNum, isNum;		//카드의 개수, 구별할 개수
	int search;			//찾을 숫자
	int first, last;		//숫자를 찾을때 사용
	cin >> cardNum;
	vector<int> possession(cardNum,0);		//소지한 카드
	for (int i = 0; i < cardNum; i++)
	{
		cin >> possession[i];
	}
	sort(possession.begin(),possession.end() );		//정렬

	cin >> isNum;
	vector<int> out(isNum, 0);
	for (int i = 0; i < isNum; i++)
	{
		cin >> search;
		first = 0; last = cardNum - 1;
		while (first <= last)					//이진탐색
		{
			int mid = (first + last) / 2;
			if (search == possession[mid])		//찾은경우
			{
				out[i] = 1;
				break;
			}
			else if (search > possession[mid])
			{
				first = mid + 1;
			}
			else if (search < possession[mid])
			{	
				last = mid - 1;
			}
		}

	}
	for (int i = 0; i < isNum; i++)
	{
		cout << out[i] << " ";
	}
	return 0;
}