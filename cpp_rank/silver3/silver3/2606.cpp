#include <iostream>
using namespace std;

int main()
{
	int com, link;
	bool* infection;
	long long* from;
	long long* to;
	int index = 0,temp;
	int output = 0;

	cin >> com;
	cin >> link;

	infection = new bool[com + 1];	//��� ��ǻ�ʹ� �����Ǿ��°�
	from = new long long[link + 1];
	to = new long long[link + 1];

	for (int i = 0; i < link; i++)
	{
		cin >> from[i] >> to[i];
	}
	for (int i = 0; i < com; i++)					//�����ǻ�ʹ� �������� ���� ����
	{
		infection[i] = false;
	}
	infection[0] = true;							//1�� ����



	for (int i = 0; i < com; i++)
	{
		for (int j = 0; j < link; j++)
		{
			//if (infection[i] == true)				//1������ ��ǻ�Ͱ� �����Ǿ����� ����Ȯ��
			{
				if (infection[from[j] - 1] == true)				//������ ��ǻ�Ϳ� ����� ���
				{
					infection[to[j] - 1] = true;
				}
				else if (infection[to[j] - 1] == true)
				{
					infection[from[j] - 1] = true;
				}
			}
		}
	}	

	for (int i = 0; i < com; i++)
	{
		//cout << i << ": " << infection[i] << endl;
		if (infection[i] == true)
		{
			output++;
		}
	}

	cout << output - 1;								//1����ǻ�� ����


	delete[] infection;
	delete[] from;
	delete[] to;
}