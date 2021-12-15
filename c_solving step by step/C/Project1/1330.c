#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>

int main() {
	int a, b;

	scanf("%d %d", &a, &b);

	if (a > b)
		printf(">");
	else if (a < b)
		printf("<");
	else
		printf("==");
}