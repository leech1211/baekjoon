#include <iostream>
using namespace std;

int main()
{
	int input;
	int son = 1, mom = 1;	//����,�и�
	int sumCount = 1;	//���ڿͺи��� ��
	int temp = 0;		//���ڿͺи��� ���� ���°���� ���
	bool momUp = true;	//�и� ������ �������� ���ڰ� ������ ��������
	
	cin >> input;
	if (input == 1)		//1�� �Էµȴٸ� 1/1���
	{
		cout << "1/1";
		return 0;
	}

	for (int i = 0; i < input - 1; i++)
	{
		if (momUp == true)
		{
			mom++;			//�и�����
			if (son != 1)	//���ڰ� 1�̾ƴϸ�
			{
				son--;		//���ڰ���
			}
			temp++;
			if (temp < sumCount)		//���ںи��� ���� ���� �Ӱ�ġ�� �ٴٸ��� �ʾҴٸ�
			{
				continue;
			}
			else						//���ںи��� ���� �ٲ𶧰� ��ٸ� 
			{
				temp = 0;
				sumCount++;
				momUp = false;			//�������� ���ڰ� ����
			}
			
		}
		else
		{
			son++;
			if (mom != 1)
			{
				mom--;
			}
			temp++;
			if (temp < sumCount)
			{
				continue;
			}
			else
			{
				temp = 0;
				sumCount++;
				momUp = true;
			}
		}
	}	

	cout << son << "/" << mom;
}