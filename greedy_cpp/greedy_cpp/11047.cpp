#include <iostream>
using namespace std;

int main()
{
	int kind, sum;
	int* coin;
	int check = 0;		//�ʿ��� ������ ���� ū ����
	int share = 0;		//������ ��
	int rest = 0;		//������
	int result = 0;		//������ ����

	cin >> kind;	//���� ���� �Է�
	cin >> sum;		//�ݾ��Է�	

	coin = new int[kind]; //kind��ŭ �迭

	for (int i = 0; i < kind; i++)
	{
		cin >> coin[i];
	}

	for (int i = kind - 1; i < kind; i--)
	{
		
		if(sum / coin[i] != 0)		//�ʿ��� ������ ���� ū ����
		{
			check = i;
			break;
		}
	}

	
	while (sum != 0)
	{
		share = sum / coin[check];
		rest = sum % coin[check];
		sum = rest;
		check--;

		result += share;
	}

	cout << result << endl;



	delete coin;


}