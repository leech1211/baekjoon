#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>
#include <string.h> //strlen() 함수사용을 위해

int main()
{
	int a;
	char arr[80] = { 0, };
	int cont = 0;  //연속점수
	int score = 0; //최종점수
	int length = 0; //케이스의 길이
	scanf("%d", &a);

	for (int i = 0; i < a; i++)
	{
		scanf("%s", &arr);
		length = strlen(arr);
		for (int j = 0; j < length; j++)
		{
			if (arr[j] == 'X')
			{
				cont = 0;
				score += cont;

			}
			else if (arr[j] == 'O')
			{
				cont++;
				score += cont;

			}
		}
		printf("%d\n", score);
		score = 0;
		cont = 0;
	}
}