#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>
int main() {
	int a, b;
	
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%.9f", (double)a / b);
	return 0;
}