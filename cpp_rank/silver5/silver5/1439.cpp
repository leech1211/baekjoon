#include <iostream>
using namespace std;

int main()
{
	string s;		//문자열
	int length;		//문자열의 길이
	int zero = 0;		//0뭉텅이의개수
	int one = 0;		//1뭉텅이의개수
	int count = 0;		//출력값
	int j = 0;			
	bool check = false;



	cin >> s;
	length = s.length();

	for (int i = 0; i < length; i++)
	{
		if (s[i] == s[i + 1])
		{
			continue;
		}
		else						//다른게 나오면?
		{
			if (s[i] == '0')
			{
				zero++;
			}
			else
			{
				one++;
			}
		}
	}

	/*cout << "zero : " << zero << endl;
	cout << "one : " << one << endl;*/

	if (zero > one)			//0뭉텅이가 1뭉텅이보다 많을 때
	{
		while (s[j] != NULL)
		{
			if (s[j] == '1')			//1이 나오면
			{					
				if (check == false)
				{
					count++;
					check = true;
				}
				j++;
			}
			else						
			{
				if (check == true)
				{
					check = false;
					
				}			
				j++;
			}
		}
	}
	else if(zero < one)		//1뭉텅이가 0뭉텅이보다 많을때
	{
		while (s[j] != NULL)
		{
			if (s[j] == '0')			//0이 나오면
			{
				if (check == false)
				{
					count++;
					check = true;
					
				}
				j++;
			}
			else
			{
				if (check == true)
				{
					check = false;
					
				}
				j++;
			}
		}
	}	
	else if(zero == one)			//0의 뭉탱이와 1의 뭉탱이가 같다면
	{
		count = zero;
	}

	cout << count;

	//0과1의 개수가 아닌 뭉텅이의 개수를 보아야함
	//숫자가 바뀌지 않고 쭉 나온다면?
}