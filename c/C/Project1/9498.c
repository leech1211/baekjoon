#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>

int main()
{
	int score; //시험점수

	scanf("%d", &score);

	if (100 >= score && score >= 90)
		printf("A");
	else if (89 >= score && score >= 80)
		printf("B");
	else if (79 >= score && score >= 70)
		printf("C");
	else if (69 >= score && score >= 60)
		printf("D");
	else
		printf("F");


}