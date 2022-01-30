#include <iostream>
using namespace std;

int main()
{
	int input;
	int son = 1, mom = 1;	//분자,분모
	int sumCount = 1;	//분자와분모의 합
	int temp = 0;		//분자와분모의 합이 몇번째인지 계산
	bool momUp = true;	//분모가 증가할 차례인지 분자가 증가할 차례인지
	
	cin >> input;
	if (input == 1)		//1이 입력된다면 1/1출력
	{
		cout << "1/1";
		return 0;
	}

	for (int i = 0; i < input - 1; i++)
	{
		if (momUp == true)
		{
			mom++;			//분모증가
			if (son != 1)	//분자가 1이아니면
			{
				son--;		//분자감소
			}
			temp++;
			if (temp < sumCount)		//분자분모의 합이 아직 임계치에 다다르지 않았다면
			{
				continue;
			}
			else						//분자분모의 합이 바뀔때가 됬다면 
			{
				temp = 0;
				sumCount++;
				momUp = false;			//다음부터 분자가 증가
			}
			
		}
		else
		{
			son++;
			if (mom != 1)
			{
				mom--;
			}
			temp++;
			if (temp < sumCount)
			{
				continue;
			}
			else
			{
				temp = 0;
				sumCount++;
				momUp = true;
			}
		}
	}	

	cout << son << "/" << mom;
}