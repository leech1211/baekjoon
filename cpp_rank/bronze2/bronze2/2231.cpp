#include <iostream>
using namespace std;

int main()
{
	int num;
	int temp = 1;
	int temp2;			//���ڸ���
	int sum;			//�� �ڸ����ڿ� ������ ���ϸ�?
	int out = 1;		//��µ� ����

	cin >> num;

	while (1)
	{
		temp = out;
		sum = temp;		//���� �ڱ��ڽ��� ���մϴ�
		while (1)
		{
			temp2 = temp % 10;		//���ڸ� ���ڸ� ���ؼ�
			sum += temp2;			//sum�� �����ݴϴ�
			if (temp / 10 == 0)		//temp�� ���ڸ� ���ڶ�� �� ��� �ڸ����� ��� ���ߴٸ�
			{
				break;
			}
			else
			{
				temp = temp / 10;	//���� �ڸ� ���ڱ��ϱ�
			}
		}
		if (sum == num)				//��δ��� ����� �����ڶ��
		{
			break;
		}
		else if (out > num)			//�Էµ� ���ں��� Ŀ���ٸ�
		{
			out = 0;
			break;
		}
		else
		{
			out++;
		}
		
	}
	cout << out;
}