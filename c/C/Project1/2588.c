#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include<stdio.h>
int main()
{
	int a, b;
	int c, d, e;
	int one = 0, ten = 0 , hun = 0; //b의 일의자리,10의자리,100의 자리

	scanf("%d %d", &a, &b);
	hun = b / 100;
	ten = (b - (hun * 100)) / 10;
	one = b % 10;

	c = a * one;
	d = a * ten;
	e = a * hun;
	

	printf("%d \n", c);
	printf("%d \n", d);
	printf("%d \n", e);
	printf("%d \n", a*b);


}