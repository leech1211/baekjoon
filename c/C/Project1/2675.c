#define _CRT_SECURE_NO_WARNINGS //scanf��������
#include <stdio.h>
#include <string.h>  //strlen()���

int main()
{
	int a; //�׽�Ʈ�� �ݺ�Ƚ��
	int rep; //������ �ݺ�Ƚ��
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
