#include <iostream>
using namespace std;

int main()
{
	string num;
	int leng;	//±æÀÌ
	int sum;	//ÇÕ
	while (1)
	{
		sum = 0;
		
		cin >> num;
		leng = num.length();
		if (num[0] == '0')
		{
			break;
		}
		for (int k = 0; k < leng; k++)
		{
			if (num[k] == '1')
			{
				sum += 2;
			}
			else if (num[k] == '0')
			{
				sum += 4;
			}
			else
			{
				sum += 3;
			}
		}

		cout << sum + leng + 1 << endl;
	}

	return 0;
}