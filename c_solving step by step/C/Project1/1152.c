#define _CRT_SECURE_NO_WARNINGS //scanf��������
#include <stdio.h>
#include <string.h>  //strlen()���

int main()
{
	char arr[1000000] = "";  //���ڿ�
	int leng = 0;  //����
	int count = 0;  //��
	char c;


	gets(arr);
	leng = strlen(arr);

	if (leng == 1)
		{ if (arr[0] == ' ')
			{
				printf("0\n");
				return 0;
		}
	}


	

	for (int i = 1; i < leng-1; i++)
	{
		c = arr[i];
		
		if (c == ' ')
		{		
			count++;
			
		}
		
	}

	printf("%d", count + 1);

	
}





//��ĭ�� �ƽ�Ű�ڵ� 32