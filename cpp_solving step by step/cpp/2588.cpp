#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int hou, ten, one; //�����ڸ� �����ڸ� �����ڸ�
	cin >> a;
	cin >> b;

	hou = b / 100;
	ten = (b % 100) / 10;
	one = b % 10;

	cout << a * one << endl;
	cout << a * ten << endl;
	cout << a * hou << endl;
	cout << a * b << endl;
}