#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>

int main()
{
	int year;
	scanf("%d", &year);
	if (year % 4 == 0)
		if (year % 100 != 0 || year % 400 == 0)
			printf("1");
		else
			printf("0");
	else
		printf("0");

	
}