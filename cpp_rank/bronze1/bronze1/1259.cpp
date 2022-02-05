#include <iostream>
using namespace std;

int main()
{
	string input;
	string zero = "0";
	int leng;		//input의 길이
	int middle;		//가운데 숫자

	while (1)
	{
		leng = 0;
		cin >> input;
		if (input == "0")
			break;
		leng = input.length();
		

		if (leng % 2 == 0)		//입력된 테스트가 짝수라면
		{
			middle = (leng / 2);
			for (int i = 0; i < leng - middle; i++)
			{
				if (input[middle - i - 1] != input[middle + i])
				{
					//cout << "input[middle - i] = " << input[middle - i] << " input[middle + i] = " << input[middle + i] << endl;
					cout << "no" << endl;
					break;
				}
				if (middle - i - 1 == 0)
				{
					cout << "yes" << endl;
					break;
				}
			}			
		}
		else					//입력된 테스트가 홀수라면
		{
			middle = (leng / 2);
			for (int i = 0; i < leng - middle; i++)
			{
				if (input[middle - i] != input[middle + i])
				{
					//cout << "input[middle - i] = " << input[middle - i] << " input[middle + i] = " << input[middle + i] << endl;
					cout << "no" << endl;
					break;
				}
				if (middle - i == 0)
				{
					cout << "yes" << endl;
					break;
				}
			}
			
		}
		
	}
}//짝수인 팰린드롬도 있다 1221