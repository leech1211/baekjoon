#define _CRT_SECURE_NO_WARNINGS //scanf��������
#include <stdio.h>
#include <string.h>  //strlen()���

int main()
{
	int arr[26] = { 0, }; //���ĺ��� ������ ����Ǵ� �迭
	char word[1000000];
	int length; //�ܾ��� ����
	int temp;
	int max = 0;   //���� ���� ���� ���ĺ��� üũ
	int count = 0; //���� ���� ���ĺ��� �ΰ��̻����� Ȯ��
	int check = 0; //���� ���� ���� ���ĺ��� ����ϱ����� ����

	scanf("%s", word);
	length = strlen(word);
	

	for (int i = 0; i < length; i++)  //�ҹ��ڴ� �빮�ڷ� �ٲ��ִ� ����
	{
		if (word[i] >= 'a' && word[i] <= 'z')
			word[i] = word[i] - 32;
	}
	
	for (int i = 0; i < length; i++)
	{
		temp = word[i] - 65;
		arr[temp]++;
	}
	
	//for (int j = 0; j < 26; j++)  //arr��� �׽�Ʈ
	//{
	//	printf("%d", arr[j]);
	//}

	for (int j = 0; j < 26; j++)
	{
		if (arr[j] > max )
		{
			count = 0;  //���帹�� ���� ���ĺ��� ���ŵǾ�����
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