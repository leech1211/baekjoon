#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include<stdio.h>
int main()
{
	int hour, min;   //원래 시간
	int nhour, nmin; //바뀐 시간
	scanf("%d %d", &hour, &min);

	nmin = min - 45;
	nhour = hour;
	if (nmin < 0)
	{
		nmin = 60 + nmin;
		nhour = nhour - 1;
		if (nhour < 0)
			nhour = 23;
	}

	printf("%d %d", nhour, nmin);
		
}