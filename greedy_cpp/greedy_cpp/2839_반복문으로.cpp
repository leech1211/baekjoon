#include <iostream>
using namespace std;

int main()
{
	int sugar; //���������� ����
	int five, three; //5kg������ 3kg������ ����
	int rest;	//�� �������� �ʰ� �������� ������ -1 ���
	int min=10000000;	//������ ����� ���� ������
	int i = 0;
	int j = 0;

	cin >> sugar;
	five = 0;
	three = 0;


	//������ ���԰� 3,5�� ������ ���� �� ������ -1
	for (i = 0; i * 5 + j * 3 <= sugar; i++)
	{
		
		for (j = 0; i * 5 + j * 3 <= sugar; j++)
		{
			if (i * 5 + j * 3 == sugar)	//3��5���������� �����ǹ��԰� ���´ٸ�
			{
				//cout << "i: " << i << "j: " << j << endl;
				if (i + j < min)
				{
					min = i + j;
				}
			}
		}
		j = 0;
	}

	if(min == 10000000)		//min �� ������ ���°��
	{
		cout << "-1" << endl;
	}
	else                    //������ ����� �� �� ���� ���� �� ���
	{
		cout << min << endl;
	}	
	return 0;

}