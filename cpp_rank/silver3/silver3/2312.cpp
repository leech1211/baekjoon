#include <iostream>
using namespace std;

int main()
{
	int testcase;
	int num, temp;
	int share, time;		//몫과 횟수
	
	cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		temp = 2;
		share = 1; time = 0;
		cin >> num;
		while (num != 1)
		{
			
			if (num % temp == 0) //temp의 값으로 나눌 수 있다면
			{
				num = num / temp;
				time++;
			}
			else if (num % temp != 0)	//더이상 temp의 값으로 나눌 수 없을 때
			{
				if (time != 0)			//temp로 나누었었다면
				{
					cout << temp << " " << time << endl;
					time = 0;
					temp++;
				}
				else					//temp로 나누지 않았었다면 즉, temp가 약수가 아니었다면
				{
					time = 0;
					temp++;
				}
			}		
			
		}
		cout << temp << " " << time << endl;		//마지막 곱 출력
	}

}