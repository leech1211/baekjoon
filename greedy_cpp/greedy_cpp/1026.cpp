#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;		//길이
	int sum = 0;
	cin >> n;	//길이입력

	vector<int> a(n);		//배열 A
	vector<int> b(n);		//배열 B
	vector<int> c(n);		//배열 C  B랑 같음

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
		c[i] = b[i];
	}

	sort(a.begin(), a.end());		//A 오름차순정렬
	sort(c.begin(), c.end(),greater<int>());		//C 내림차순정렬

	for (int i = 0; i < n; i++)
	{
		sum += a[i] * c[i];
	}
	cout << sum << endl;
	return 0;
}