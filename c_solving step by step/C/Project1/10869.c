#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include<stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a,&b);

	printf("%d \n", a + b);
	printf("%d \n", a - b);
	printf("%d \n", a * b);
	printf("%d \n", a / b);
	printf("%d \n", a % b);

}