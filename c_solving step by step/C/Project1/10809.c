#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>
#include <string.h>  //strlen()사용

int main()
{
	char word[100];
	int length;
	int alpha[26] = { 0, };
	int temp = 0;
	scanf("%s", word);

	length = strlen(word);

	for (int i = 0; i < 26; i++)
	{
		alpha[i] = -1;

	}

	for (int i = 0; i < length; i++)
	{
		temp = word[i] - 97;
		if (alpha[temp] != -1)
		{
			continue;
		}
		else
		{
			alpha[temp] = i;
		}
		
			
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", alpha[i]);
				
	}
}

