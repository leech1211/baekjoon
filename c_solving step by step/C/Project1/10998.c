#define _CRT_SECURE_NO_WARNINGS //scanf��������
#include <stdio.h>
int main() {
	int a, b;
	double c;
	scanf("%d", &a);
	scanf("%d", &b);
	c = a / b;
	printf("%d", c);
	return 0;
}