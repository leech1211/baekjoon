#include <iostream>
using namespace std;

int main()
{
	int num;	//����� ��
	int* people;	//�ɸ��� �ð��� �迭
	int temp;	//�ӽú���
	int timetemp = 0;	//�ɸ��� �ð� �ӽú���
	int sum = 0;	//�ɸ��� �ð�

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