#include <iostream>
using namespace std;

int main()
{
	int garo;	//����
	int sero;	//����
	int sol = 1;	//���
	

	cin >> sero;	//�����Է�
	cin >> garo;	//�����Է�

	if (sero == 1)
	{
		sol = 1;
	}
	else if(sero == 2)
	{
		if (garo <= 7)
		{
			sol = (garo + 1) / 2;
		}
		else
		{
			sol = 4;
		}
	}
	else if (garo < 7)
	{
		if (garo > 4)
		{
			sol = 4;
		}
		else
		{
			sol = garo;
		}
	}
	else
	{
		sol = garo - 2;
	}

	
	

	cout << sol << endl;
	return 0;
}