#include <iostream>
using namespace std;
#define max 10000 + 1
int arr[max];			//main�Լ� �ȿ� �������ִ� �޸𸮸� �ʰ��ϴ� ������ ����

int main()
{
	int testcase;
	int num;
	int temp1 = 0, temp2 = 0, dis = 0;			//dis�� num-�Ҽ� �� �����ϴ� ����
	int PrimeDis = 10000, prePrimeDis = 0;		//��Ƽ���� ���������� ��� �� �Ҽ����̰� ���� �������� ����ϱ� ���� ����ϴ� ����
	int save1 = 0, save2 = 0;
	

	//�����佺�׳׽��� ü
	for (int i = 2; i < max; i++)
		arr[i] = i;
	for (int i = 2; i <= max; i++)
	{
		if (arr[i] == 0)
			continue;
		for (int j = i + i; j <= max; j += i)
		{
			arr[j] = 0;
		}
	}

	

	cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		PrimeDis = 10000, prePrimeDis = 0;
		cin >> num;
		for (int k = 2; k <= num; k++)
		{
			prePrimeDis = PrimeDis;			//���� �Ҽ� ��Ƽ���� ���̸� ����
			if (arr[k] == k)				//�Ҽ��� ã��
			{
				dis = num - k;				
				if (arr[dis] == dis)		//num-k���� �Ҽ��ΰ��
				{
					temp1 = k;
					temp2 = dis;
					PrimeDis = temp2 - temp1;
					if (PrimeDis < 0)		//10 �� ��� 3,7 5,5 7,3 �� ��찡 �ִµ� �Ҽ��� ���̰� ���� ���� ������ ���ؾ���
											//3-7 �� �����̹Ƿ� �Ҽ����� ���̸� ����� �ٲپ���
					{
						PrimeDis *= -1;
					}
					if (prePrimeDis < PrimeDis)		//������ ���պ��� �Ҽ��� ���̰� �۴ٸ�
					{
						temp1 = save1;				//������ �Ҽ� ������ ������
						temp2 = save2;
					} 
					else							// �ƴ϶�� �ϴ� �̹� ���� ����
					{
						save1 = temp1;
						save2 = temp2;
					}
				}

			}

		}
		cout << temp2 << " " << temp1 << endl;
	}
	return 0;
}