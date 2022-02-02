#include <iostream>
using namespace std;

int main()
{
	string num;
	char temp;
	int leng;
	cin >> num;

	leng = num.length();
	for (int i = 0; i < leng; i++)
	{
		for (int j = 0; j < leng - i; j++)
		{
			if (num[j] < num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < leng; i++)
	{
		cout << num[i];
	}


}