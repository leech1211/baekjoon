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
	//	if (fac % 10 == 0)		//10으로 나눈 나머지가 0이라면 10의 배수 즉 맨뒤자리가 0이다
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
//n!을 직접구하는건 무리다 - 뒤에 0이 나오는 경우는 10이 곱해진 경우 
//10 = 2 x 5 이므로 5만 생각해도 됨