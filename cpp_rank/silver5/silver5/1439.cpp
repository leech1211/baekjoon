#include <iostream>
using namespace std;

int main()
{
	string s;		//���ڿ�
	int length;		//���ڿ��� ����
	int zero = 0;		//0�������ǰ���
	int one = 0;		//1�������ǰ���
	int count = 0;		//��°�
	int j = 0;			
	bool check = false;



	cin >> s;
	length = s.length();

	for (int i = 0; i < length; i++)
	{
		if (s[i] == s[i + 1])
		{
			continue;
		}
		else						//�ٸ��� ������?
		{
			if (s[i] == '0')
			{
				zero++;
			}
			else
			{
				one++;
			}
		}
	}

	/*cout << "zero : " << zero << endl;
	cout << "one : " << one << endl;*/

	if (zero > one)			//0�����̰� 1�����̺��� ���� ��
	{
		while (s[j] != NULL)
		{
			if (s[j] == '1')			//1�� ������
			{					
				if (check == false)
				{
					count++;
					check = true;
				}
				j++;
			}
			else						
			{
				if (check == true)
				{
					check = false;
					
				}			
				j++;
			}
		}
	}
	else if(zero < one)		//1�����̰� 0�����̺��� ������
	{
		while (s[j] != NULL)
		{
			if (s[j] == '0')			//0�� ������
			{
				if (check == false)
				{
					count++;
					check = true;
					
				}
				j++;
			}
			else
			{
				if (check == true)
				{
					check = false;
					
				}
				j++;
			}
		}
	}	
	else if(zero == one)			//0�� �����̿� 1�� �����̰� ���ٸ�
	{
		count = zero;
	}

	cout << count;

	//0��1�� ������ �ƴ� �������� ������ ���ƾ���
	//���ڰ� �ٲ��� �ʰ� �� ���´ٸ�?
}