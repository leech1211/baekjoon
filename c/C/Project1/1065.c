#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>
int han(int num)
{
	
	int hou = 0, ten = 0, one = 0; //각 자리 숫자
	int dif1 = 0, dif2 = 0;  //dif1은 백의자리와 십의자리 숫자의 차이 
							 //dif2는 십의자리와 일의자리 숫자의 차이
	int sol = 0; //한수의 개수



	for (int i = 1; i <= num; i++)
	{
		hou = i / 100;
		ten = (i % 100) / 10;
		one = i % 10;

		dif1 = hou - ten;
		dif2 = ten - one;

		if (hou == 0)  //1~99는 모두한수
			dif1 = dif2;
		if (dif1 == dif2)
		{
			sol++;
		}
	}
	return sol;


}

int main()
{
	int num;
	int sol;

	scanf("%d", &num);
	sol = han(num);
	printf("%d", sol);
	
}