#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>
#include <string.h>  //strlen()사용

int main()
{
	int arr[26] = { 0, }; //알파벳의 개수가 저장되는 배열
	char word[1000000];
	int length; //단어의 길이
	int temp;
	int max = 0;   //가장 많이 나온 알파벳을 체크
	int count = 0; //많이 사용된 알파벳이 두개이상인지 확인
	int check = 0; //가장 많이 나온 알파벳을 출력하기위한 변수

	scanf("%s", word);
	length = strlen(word);
	

	for (int i = 0; i < length; i++)  //소문자는 대문자로 바꿔주는 과정
	{
		if (word[i] >= 'a' && word[i] <= 'z')
			word[i] = word[i] - 32;
	}
	
	for (int i = 0; i < length; i++)
	{
		temp = word[i] - 65;
		arr[temp]++;
	}
	
	//for (int j = 0; j < 26; j++)  //arr출력 테스트
	//{
	//	printf("%d", arr[j]);
	//}

	for (int j = 0; j < 26; j++)
	{
		if (arr[j] > max )
		{
			count = 0;  //가장많이 나온 알파벳이 갱신되었을때
			max = arr[j];
			check = j;
		}
		if (arr[j] == max)
			count++;
	}

	if (count > 1)
	{
		printf("?");
		
	}
	else
	{
		printf("%c", check + 65);
	}
	
}