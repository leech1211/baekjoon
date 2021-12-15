#include <stdio.h>

int main()
{
	int arr[100000] = { 0, };
	int ten = 0, one = 0; //i를 십의자리와 일의자리로 나눈 값
	int thou = 0, hou = 0; //i의 1000의 자리,100의자리 수
	for (int i = 0; i < 10000; i++)
	{
		thou = i / 1000;
		hou = (i % 1000) / 100;
		ten = (i % 100) / 10;
		one = i % 10;
		arr[i + thou + hou + ten + one]++;  //생성자가 있는 숫자
	}

	for (int i = 0; i < 10000; i++)
	{
		if (arr[i] == 0)
		{
			printf("%d\n",i);
		}
	}
}