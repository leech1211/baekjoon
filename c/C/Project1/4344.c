#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>

int main()
{
	int room; //케이스의 개수
	int people; //학생의 수
	int student[999] = { 0, }; //점수
	int sum = 0; //합계
	double avg = 0.0; //평균
	double winner = 0; //평균을 넘은 학생수

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