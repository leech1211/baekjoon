#define _CRT_SECURE_NO_WARNINGS //scanf��������
#include <stdio.h>

int main()
{
	int room; //���̽��� ����
	int people; //�л��� ��
	int student[999] = { 0, }; //����
	int sum = 0; //�հ�
	double avg = 0.0; //���
	double winner = 0; //����� ���� �л���

	scanf("%d", &room);

	for (int i = 0; i < room; i++)
	{
		people = 0;
		avg = 0;
		winner = 0;
		sum = 0;
		scanf("%d", &people);
		for (int j = 0; j < people; j++)
		{
			scanf("%d", &student[j]);
			sum += student[j];
		}
		avg = sum / people;

		for (int j = 0; j < people; j++)
		{
			if (student[j] > avg)
				winner += 1;
		}

		printf("%.3f%%\n", (double)(winner * 100 / people));


	}
}