
#include <stdio.h>
#include <string.h>

int main()
{
    char input[1000000] = "";
    char c;

    printf("���ڿ��� �Է��ϼ���(��;\"Hello World! 123AbcDEf !@#@\"):");
    gets_s(input,sizeof(input));

    for (int i = 0; i < strlen(input); i++)
    {
        c = input[i];

        //�Է��� ���ڰ� �ҹ����ΰ� ?
        if (c >= 'a' && c <= 'z')
            printf("%c �� ���ĺ� �ҹ���\n", c);
        //�׷��� ������ �빮���ΰ� ?
        else if (c >= 'A' && c <= 'Z')
            printf("%c �� ���ĺ� �빮��\n", c);
        //�׷��� ������ �����ΰ� ?
        else if (c >= '0' && c <= '9')
            printf("%c �� ����\n", c);
        //�׷��� ������ �����ΰ�?
        else if (c == ' ')
            printf("%c �� ����\n", c);
        //��Ÿ�ΰ� ?
        else
            printf("%c �� ��Ÿ ����\n", c);
    }

    //���ĺ� �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� ����
    //ASCII �ڵ� ���̺� ����
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


