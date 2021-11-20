#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>
#include <string.h>  //strlen()사용

int main()
{
	int a; //테스트의 반복횟수
	int rep; //문자의 반복횟수
	char arr[20];
	int length;
	scanf("%d",&a);

	for (int i = 0; i < a; i++)
	{
		scanf("%d", &rep);
		scanf("%s", arr);
		length = strlen(arr);
		for (int j = 0; j < length; j++)
		{
			for (int k = 0; k < rep; k++)
			{
				printf("%c", arr[j]);
			}
		}
		printf("\n");
	}

}
