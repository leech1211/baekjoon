#define _CRT_SECURE_NO_WARNINGS //scanf��������
#include <stdio.h>

int main()
{
	int num;
	int fake;
	int ten, one; //10�� �ڸ�,1�� �ڸ�
	int new , temp; //���ο� �� , temp = ten + one
	int count = 0;  //Ƚ��
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