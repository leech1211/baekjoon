#include <iostream>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
	if (a.size() == b.size())
	{
		return a < b;
	}
	else
	{
		return a.size() < b.size();
	}
}

int main()
{
	int num;
	string* arr;	//�ܾ�
	string temp;
	

	cin >> num;
	arr = new string[num];
	

	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + num , compare);

	
	/*
	for (int i = 0; i < num; i++)					//bubble
	{
		for (int j = 0; j < num - i -1; j++)
		{
			if (leng[j] > leng[j + 1])				//arr,leng��� ���ڿ� ���̿� ���� ����
			{
				temp = leng[j];
				leng[j] = leng[j + 1];
				leng[j + 1] = temp;

				arrtemp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = arrtemp;
			}

			if (leng[j] == leng[j + 1])				//���� ���̰� ������ ����������
			{
				if (arr[j] > arr[j + 1])
				{
					arrtemp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = arrtemp;
				}
			}
		}
	}*/
	

	

	for (int i = 0; i < num; i++)
	{
		if (arr[i] == temp)					//���� �����ϰ��
		{
			continue;
		}
		else
		{
			cout << arr[i] << endl;
			temp = arr[i];
		}
		
	}

	delete[] arr;
	return 0; 
}