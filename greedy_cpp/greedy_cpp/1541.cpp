#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	char input[51];		//�ԷµǴ� ��
	int len = 0;	//���� ����
	string temp;
	int result = 0; //���
	bool minus = false;

	cin >> input;
	len = strlen(input) + 1;

	for (int i = 0; i < len; i++)
	{
		if (input[i] == '+' || input[i] == '-' || input[i] == '\0')
		{
			if (minus)
			{
				result -= stoi(temp);
			}
			else
			{
				result += stoi(temp);				
			}
			temp = "";
			if (input[i] == '-')
			{
				minus = true;		
				continue;
			}			
		}
		else
		{
			temp += input[i];
		}
		
	}

	cout << result << endl;
	return 0;	
}
