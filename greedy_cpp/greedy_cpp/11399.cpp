#include <iostream>
using namespace std;

int main()
{
	int num;	//사람의 수
	int* people;	//걸리는 시간의 배열
	int temp;	//임시변수
	int timetemp = 0;	//걸리는 시간 임시변수
	int sum = 0;	//걸리는 시간

	cin >> num;
	people = new int[num];

	for (int i = 0; i < num; i++)
	{
		cin >> people[i];
	}

	for (int i = 0; i < num - 1; i++)
	{
		for (int j = num - 1; j > i; j--)
		{
			if (people[j - 1] > people[j])
			{
				temp = people[j - 1];
				people[j - 1] = people[j];
				people[j] = temp;
			}

		}
	}


	for (int i = 1; i < num; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			//cout << people[j] << endl;
			timetemp += people[j];
		}
		sum += timetemp;
		timetemp = 0;
	}


	/*for (int i = 0; i < num; i++)
	{
		cout << people[i];
	}*/
	
	cout << sum + people[0];
	delete people;
	return 0;
}