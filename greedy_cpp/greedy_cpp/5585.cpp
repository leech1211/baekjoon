#include <iostream>
using namespace std;

int main()
{
	int pay;		//������ ��
	
	int sum = 0;		//�ܵ��� ����
	int share;		//��
	


	cin >> pay;
	pay = 1000 - pay;		//�Ž������� �ݾ�

	share = pay / 500;
	sum += share;
	pay = pay % 500;

	share = pay / 100;
	sum += share;
	pay = pay % 100;

	share = pay / 50;
	sum += share;
	pay = pay % 50;

	share = pay / 10;
	sum += share;
	pay = pay % 10;

	share = pay / 5;
	sum += share;
	pay = pay % 5;

	share = pay / 1;
	sum += share;
	pay = pay % 1;

	cout << sum;

	return 0;

}