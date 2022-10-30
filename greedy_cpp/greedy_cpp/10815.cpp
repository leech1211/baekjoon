#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int	cardNum, isNum;		//ī���� ����, ������ ����
	int search;			//ã�� ����
	int first, last;		//���ڸ� ã���� ���
	cin >> cardNum;
	vector<int> possession(cardNum,0);		//������ ī��
	for (int i = 0; i < cardNum; i++)
	{
		cin >> possession[i];
	}
	sort(possession.begin(),possession.end() );		//����

	cin >> isNum;
	vector<int> out(isNum, 0);
	for (int i = 0; i < isNum; i++)
	{
		cin >> search;
		first = 0; last = cardNum - 1;
		while (first <= last)					//����Ž��
		{
			int mid = (first + last) / 2;
			if (search == possession[mid])		//ã�����
			{
				out[i] = 1;
				break;
			}
			else if (search > possession[mid])
			{
				first = mid + 1;
			}
			else if (search < possession[mid])
			{	
				last = mid - 1;
			}
		}

	}
	for (int i = 0; i < isNum; i++)
	{
		cout << out[i] << " ";
	}
	return 0;
}