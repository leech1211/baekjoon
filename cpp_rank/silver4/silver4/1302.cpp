#include <iostream>
using namespace std;

int main()
{
	int testcase;
	string arr[1001];	//å�� ����
	int num[1001] = { 0, };	//å�� �ȸ�����
	int best = 0;			//���帹�� �ȸ� å�� �Ǽ�
	string bestseller="zzz";		//���帹���ȸ� å

	cin >> testcase;
	for (int i = 0; i < testcase; i++)
	{
		cin >> arr[i];
		num[i]++;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])	//���� å�� �ִ°��
			{
				num[j]++;
				break;
			}
		}

	}

	for (int i = 0; i < testcase; i++)
	{
		if (num[i] > best)
		{
			best = num[i];
			bestseller = arr[i];	
				
		}
		else if(num[i] == best)				//���������� �ռ� ��
		{
			if (arr[i] < bestseller)
			{
				bestseller = arr[i];
			}
		}

	}

	cout << bestseller;
}
//�ȸ� å�Ǽ� �� ������ ���������� �ռ��� å ���
