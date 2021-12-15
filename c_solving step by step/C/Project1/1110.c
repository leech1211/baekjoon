#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>

int main()
{
	int num;
	int fake;
	int ten, one; //10의 자리,1의 자리
	int new , temp; //새로운 수 , temp = ten + one
	int count = 0;  //횟수
	scanf("%d", &num);

	fake = num;

	while (fake != num || count == 0)
	{
		ten = num / 10;
		one = num % 10;


		temp = ten + one;
		num = (one * 10) + temp % 10;
		count++;

	}	

	printf("%d", count);



}