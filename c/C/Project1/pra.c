#define _CRT_SECURE_NO_WARNINGS //scanf��������
#include <stdio.h>
int Sequence(int num)
{
	int hou = 0, ten = 0, one = 0;  //�ݺ����� �� �ڸ�����
	int diff_1 = 0, diff_2 = 0;
	//diff_1�� �����ڸ� ���ڿ� �����ڸ� ������ ����
	//diff_2�� �����ڸ� ���ڿ� �����ڸ� ������ ����
	int output = 0;
	//�Ѽ��� ����

	for (int i = 1; i < num + 1; i++)
	{
		hou = i / 100;  //�����ڸ� ����
		ten = (i % 100) / 10;  //�����ڸ� ����
		one = i % 10; //�����ڸ� ����

		diff_1 = hou - ten;
		diff_2 = ten - one;
		if (hou == 0)
			diff_1 = diff_2; //���ڸ� ���ڴ� ��� �Ѽ��̴�

		if (diff_1 == diff_2)
			output += 1;
	}
	return output;
}

int main()
{
	int num;
	int sol;

	scanf("%d", &num);
	sol = Sequence(num);
	printf("%d", sol);
}