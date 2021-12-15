
#include <stdio.h>
#include <string.h>

int main()
{
    char input[1000000] = "";
    char c;

    printf("문자열을 입력하세요(예;\"Hello World! 123AbcDEf !@#@\"):");
    gets_s(input,sizeof(input));

    for (int i = 0; i < strlen(input); i++)
    {
        c = input[i];

        //입력한 문자가 소문자인가 ?
        if (c >= 'a' && c <= 'z')
            printf("%c 는 알파벳 소문자\n", c);
        //그렇지 않으면 대문자인가 ?
        else if (c >= 'A' && c <= 'Z')
            printf("%c 는 알파벳 대문자\n", c);
        //그렇지 않으면 숫자인가 ?
        else if (c >= '0' && c <= '9')
            printf("%c 는 숫자\n", c);
        //그렇지 않으면 공백인가?
        else if (c == ' ')
            printf("%c 는 공백\n", c);
        //기타인가 ?
        else
            printf("%c 는 기타 문자\n", c);
    }

    //알파벳 대문자는 소문자로, 소문자는 대문자로 변경
    //ASCII 코드 테이블 참조
    for (int i = 0; i < strlen(input); i++)
    {
        c = input[i];
        if (c >= 'a' && c <= 'z')
            putchar(c - 32);
        else if (c >= 'A' && c <= 'Z')
            putchar(c + 32);
        else
            putchar(c);
    }
    return 0;
}


