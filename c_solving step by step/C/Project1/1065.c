#define _CRT_SECURE_NO_WARNINGS //scanf��������
#include <stdio.h>
int han(int num)
{
	
	int hou = 0, ten = 0, one = 0; //�� �ڸ� ����
	int dif1 = 0, dif2 = 0;  //dif1�� �����ڸ��� �����ڸ� ������ ���� 
							 //dif2�� �����ڸ��� �����ڸ� ������ ����
	int sol = 0; //�Ѽ��� ����



	for (int i = 1; i <= num; i++)
	{
		hou = i / 100;
		ten = (i % 100) / 10;
		one = i % 10;

		dif1 = hou - ten;
		dif2 = ten - one;

		if (hou == 0)  //1~99�� ����Ѽ�
			dif1 = dif2;
		if (dif1 == dif2)
		{
			sol++;
		}
	}
	return sol;


}

int main()
{
	int num;
	int sol;

	scanf("%d", &num);
	sol = han(num);
	printf("%d", sol);
	
}