#include <iostream>
using namespace std;

int main()
{
	int num;
	long long fac = 1;
	int output = 0;
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		fac *= i;
	}
	for (int i = 1; i <= num; i++)
	{
		if (i % 5 == 0)
			output++;
		if (i % 25 == 0)
			output++;
		if (i % 125 == 0)
			output++;
	}
	


	//while (1)
	//{
	//	if (fac % 10 == 0)		//10���� ���� �������� 0�̶�� 10�� ��� �� �ǵ��ڸ��� 0�̴�
	//	{
	//		output++;
	//		fac = fac / 10;
	//	}
	//	else
	//	{
	//		break;
	//	}
	//}
	cout << output;
}
//n!�� �������ϴ°� ������ - �ڿ� 0�� ������ ���� 10�� ������ ��� 
//10 = 2 x 5 �̹Ƿ� 5�� �����ص� ��