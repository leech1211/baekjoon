#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int score[8] = { 0, };		//�Է¹޴� �迭
	int sortarr[8];				//�������� ���ĵ� �迭
	int solved[5];				//Ǯ�� ������ �������
	int sum = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> score[i];
		sortarr[i] = score[i];
	}
	sort(sortarr, sortarr + 8);		//���� ������ ����
	for (int i = 3; i < 8; i++)
	{
		sum += sortarr[i];			//������ ���� 5���� ���� ���ϱ�
		for (int j = 0; j < 8; j++)		
		{
			if (sortarr[i] == score[j])		//������ ������������ ��������ΰ�
			{
				solved[i - 3] = j;			//solved�� ����
			}
		}
	}
	sort(solved, solved + 5);				//���Ṯ���� ������ȣ �������� ����

	cout << sum << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << solved[i] + 1 << " ";
	}
}