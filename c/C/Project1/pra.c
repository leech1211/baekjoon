#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>
int Sequence(int num)
{
	int hou = 0, ten = 0, one = 0;  //반복문의 각 자리숫자
	int diff_1 = 0, diff_2 = 0;
	//diff_1은 백의자리 숫자와 십의자리 숫자의 차이
	//diff_2는 십의자리 숫자와 일의자리 숫자의 차이
	int output = 0;
	//한수의 개수

	for (int i = 1; i < num + 1; i++)
	{
		hou = i / 100;  //백의자리 숫자
		ten = (i % 100) / 10;  //십의자리 숫자
		one = i % 10; //일의자리 숫자

		diff_1 = hou - ten;
		diff_2 = ten - one;
		if (hou == 0)
			diff_1 = diff_2; //두자리 숫자는 모두 한수이다

		if (diff_1 == diff_2)
			output += 1;
	}
	return output;
}

int main()
{
	int num;
	int sol;

	scanf("%d", &num);
	sol = Sequence(num);
	printf("%d", sol);
}