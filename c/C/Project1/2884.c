#define _CRT_SECURE_NO_WARNINGS //scanf��������
#include<stdio.h>
int main()
{
	int hour, min;   //���� �ð�
	int nhour, nmin; //�ٲ� �ð�
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