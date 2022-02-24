#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <iostream>
#include <algorithm>
using namespace std;

long long treenum = 0, miter = 0;			//나무의 개수  가져가려는 나무의 길이
long long tree[1000001];
long long sol;	//출력값

bool check(int mid)
{
	long long sum = 0;
	for (long long i = 0; i < treenum; i++)
	{
		if (tree[i] > mid)
		{
			sum += tree[i] - mid;
		}
	}
	if (sum >= miter)
		return true;
	else
		return false;
}

void solve(int n)
{
	long long low = 0;
	long long high = 1000000000;
	long long mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (check(mid))
		{
			sol = mid;
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	
}


int main()
{
	cin >> treenum >> miter;
	//scanf("%d %d", &treenum, &miter);
	

	for (long long i = 0; i < treenum; i++)
	{
		cin >> tree[i];
		//scanf("%d ", tree[i]);
	}
	sort(tree, tree + treenum);
	solve(miter);

	cout << sol << endl;

}