#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;		//����
	int sum = 0;
	cin >> n;	//�����Է�

	vector<int> a(n);		//�迭 A
	vector<int> b(n);		//�迭 B
	vector<int> c(n);		//�迭 C  B�� ����

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
		c[i] = b[i];
	}

	sort(a.begin(), a.end());		//A ������������
	sort(c.begin(), c.end(),greater<int>());		//C ������������

	for (int i = 0; i < n; i++)
	{
		sum += a[i] * c[i];
	}
	cout << sum << endl;
	return 0;
}