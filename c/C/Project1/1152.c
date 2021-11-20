#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <stdio.h>
#include <string.h>  //strlen()사용

int main()
{
	char arr[1000000] = "";  //문자열
	int leng = 0;  //길이
	int count = 0;  //셈
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





//빈칸의 아스키코드 32