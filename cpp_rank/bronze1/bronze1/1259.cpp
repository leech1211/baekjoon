#include <iostream>
using namespace std;

int main()
{
	string input;
	string zero = "0";
	int leng;		//input�� ����
	int middle;		//��� ����

	while (1)
	{
		leng = 0;
		cin >> input;
		if (input == "0")
			break;
		leng = input.length();
		

		if (leng % 2 == 0)		//�Էµ� �׽�Ʈ�� ¦�����
		{
			middle = (leng / 2);
			for (int i = 0; i < leng - middle; i++)
			{
				if (input[middle - i - 1] != input[middle + i])
				{
					//cout << "input[middle - i] = " << input[middle - i] << " input[middle + i] = " << input[middle + i] << endl;
					cout << "no" << endl;
					break;
				}
				if (middle - i - 1 == 0)
				{
					cout << "yes" << endl;
					break;
				}
			}			
		}
		else					//�Էµ� �׽�Ʈ�� Ȧ�����
		{
			middle = (leng / 2);
			for (int i = 0; i < leng - middle; i++)
			{
				if (input[middle - i] != input[middle + i])
				{
					//cout << "input[middle - i] = " << input[middle - i] << " input[middle + i] = " << input[middle + i] << endl;
					cout << "no" << endl;
					break;
				}
				if (middle - i == 0)
				{
					cout << "yes" << endl;
					break;
				}
			}
			
		}
		
	}
}//¦���� �Ӹ���ҵ� �ִ� 1221