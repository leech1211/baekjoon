#include <iostream>
using namespace std;

int main()
{
	int testcase;
	string input;
	int open;
	bool check;
	int leng;

	cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		open = 0;
		check = true;
		cin >> input;
		leng = input.length();

		for (int j = 0; j < leng; j++)
		{
			if (input[j] == '(')
			{
				open++;
				//cout << "open:" << open << endl;
			}
			else if (input[j] == ')')
			{
				if (open == 0)		//¿­¸°°ýÈ£ ¾øÀÌ ´ÝÈù´Ù¸é
				{
					check = false;
					//cout << "J" << j << endl;
				}
				open--;
				//cout << "open:" << open << endl;
			}
		}

		if (check == false)
		{
			cout << "NO" << endl;
			//cout << "check No";
		}
		else if (open == 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
			//cout << "open != 0";
		}

	}
}