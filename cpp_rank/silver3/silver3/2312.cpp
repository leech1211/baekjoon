#include <iostream>
using namespace std;

int main()
{
	int testcase;
	int num, temp;
	int share, time;		//��� Ƚ��
	
	cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		temp = 2;
		share = 1; time = 0;
		cin >> num;
		while (num != 1)
		{
			
			if (num % temp == 0) //temp�� ������ ���� �� �ִٸ�
			{
				num = num / temp;
				time++;
			}
			else if (num % temp != 0)	//���̻� temp�� ������ ���� �� ���� ��
			{
				if (time != 0)			//temp�� ���������ٸ�
				{
					cout << temp << " " << time << endl;
					time = 0;
					temp++;
				}
				else					//temp�� ������ �ʾҾ��ٸ� ��, temp�� ����� �ƴϾ��ٸ�
				{
					time = 0;
					temp++;
				}
			}		
			
		}
		cout << temp << " " << time << endl;		//������ �� ���
	}

}