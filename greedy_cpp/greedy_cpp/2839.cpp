#include <iostream>
using namespace std;

int main()
{
	int sugar; //���������� ����
	int five, three; //5kg������ 3kg������ ����
	int rest;	//�� �������� �ʰ� �������� ������ -1 ���
	int i = 0;

	cin >> sugar;
	five = 0;
	three = 0;

	for (i = 1; i * 3 <= sugar; i++)
	{
		if (sugar % (i * 3) == 0)
		{
			cout <<"i " << i << endl;
			five = (sugar - 3 * i) / 5;
			break;
		}
	}

	three = (sugar - (five * 5)) / 3;
	rest = (sugar - (five * 5)) % 3;

	cout << "five"<<five << endl;
	cout << "three" << three << endl;
	cout << "rest" << rest << endl;

	if (rest != 0)
	{
		cout << "-1" << endl;
		return 0;
	}

	cout << five + three << endl;
	return 0;
	
}