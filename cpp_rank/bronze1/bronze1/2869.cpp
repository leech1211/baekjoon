#include <iostream>
using namespace std;

int main()
{
	long long a, b, v;
	long long temp = 0;

	cin >> a >> b >> v;
	temp = (v - b) / (a - b) + 1;
	//temp = (v - b - 1) / (a - b) + 1;
	if ((v - b) % (a - b) == 0)		//���� �� �¾� �������ٸ� 1�� ���ϸ� �ȵȴ�
	{
		temp--;
	}
	

	cout << temp << endl;
}