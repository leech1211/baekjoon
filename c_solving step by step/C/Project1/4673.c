#include <stdio.h>

int main()
{
	int arr[100000] = { 0, };
	int ten = 0, one = 0; //i�� �����ڸ��� �����ڸ��� ���� ��
	int thou = 0, hou = 0; //i�� 1000�� �ڸ�,100���ڸ� ��
	for (int i = 0; i < 10000; i++)
	{
		thou = i / 1000;
		hou = (i % 1000) / 100;
		ten = (i % 100) / 10;
		one = i % 10;
		arr[i + thou + hou + ten + one]++;  //�����ڰ� �ִ� ����
	}

	for (int i = 0; i < 10000; i++)
	{
		if (arr[i] == 0)
		{
			printf("%d\n",i);
		}
	}
}