#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <iostream>
using namespace std;

int main()
{
	int man, count;

	bool* out;
	int temp = 0;
	int limit = 0;
	//cin >> man >> count;
	scanf("%d %d", &man, &count);

	out = new bool[man];

	for (int i = 0; i < man; i++)
	{
		out[i] = true;
	}

	//cout << "<";
	printf("<");

	while (1)
	{
		if (limit == man )
		{
			break;
		}
		for (int j = 0; j < count; )
		{
			temp++;
			if (temp == man )
			{
				temp = 0;
			}
			if (out[temp] == false)
			{
				continue;
			}
			else
			{
				j++;
			}
		}		
		if (out[temp] == true)
		{
			out[temp] = false;
			
			if (limit != man)
			{
				//cout << temp;
				if (temp == 0)
				{
					printf("%d", man);
				}
				else
				{
					printf("%d", temp);
				}
				
			}
			limit++;
			if (limit != man)
			{
				printf(", ");
				//cout <<  ", ";
			}
		}

	}

	//cout << ">";
	printf(">");
	
	delete[] out;
}