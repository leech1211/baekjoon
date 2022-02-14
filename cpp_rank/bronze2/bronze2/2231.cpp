#include <iostream>
using namespace std;

int main()
{
	int num;
	int temp = 1;
	int temp2;			//각자리수
	int sum;			//각 자리숫자와 본인을 합하면?
	int out = 1;		//출력될 숫자

	cin >> num;

	while (1)
	{
		temp = out;
		sum = temp;		//먼저 자기자신을 더합니다
		while (1)
		{
			temp2 = temp % 10;		//각자리 숫자를 구해서
			sum += temp2;			//sum에 더해줍니다
			if (temp / 10 == 0)		//temp가 한자리 숫자라면 즉 모든 자리수를 모두 더했다면
			{
				break;
			}
			else
			{
				temp = temp / 10;	//다음 자리 숫자구하기
			}
		}
		if (sum == num)				//모두더한 결과가 생성자라면
		{
			break;
		}
		else if (out > num)			//입력된 숫자보다 커진다면
		{
			out = 0;
			break;
		}
		else
		{
			out++;
		}
		
	}
	cout << out;
}