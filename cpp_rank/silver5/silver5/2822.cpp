#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int score[8] = { 0, };		//입력받는 배열
	int sortarr[8];				//점수들이 정렬된 배열
	int solved[5];				//풀은 문제가 몇번인지
	int sum = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> score[i];
		sortarr[i] = score[i];
	}
	sort(sortarr, sortarr + 8);		//문제 점수순 정렬
	for (int i = 3; i < 8; i++)
	{
		sum += sortarr[i];			//점수가 높은 5문제 점수 더하기
		for (int j = 0; j < 8; j++)		
		{
			if (sortarr[i] == score[j])		//점수가 높은문제들이 몇번문제인가
			{
				solved[i - 3] = j;			//solved에 저장
			}
		}
	}
	sort(solved, solved + 5);				//맞춘문제들 문제번호 오름차순 정렬

	cout << sum << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << solved[i] + 1 << " ";
	}
}