#include <iostream>
using namespace std;

int main()
{
	int testcase;
	int temp;
	int mini;
	int output = 0;

	cin >> testcase;
	for (int i = 0; i < testcase; i++)
	{
		mini = 2;
		cin >> temp;

		if (temp == 2)
		{
			output++;
		}

		while (mini < temp)
		{
			if (temp % mini == 0)		//������ �������� �Ҽ��� �ƴ�
			{
				break;
			}
			if (mini == temp - 1)		//���������� �� ���� ������� �Դٸ� 
			{
				output++;
			}
			mini++;
		}
	}
	cout << output;
}