#include <iostream>
#include <vector>			//vector ���
#include <algorithm>		//sort ���

using namespace std;
int main() {
	int n;		//ȸ�� ����
	cin >> n;		
	vector<pair<int, int>> a(n);		//2���� ���� ������ Ÿ���� ���� �����Ѵ�	
										//������ ���� .fisrt�� .second�� ���� ������ �� �ִ�
										//�ΰ��� ������ ���� ���� ������ �� �ִ�
										//ȸ�� ���۽ð��� ����ð��� ����


	for (int i = 0; i < n; i++) {		//�Է��� ����
		cin >> a[i].second >> a[i].first;
	}
	sort(a.begin(), a.end());		//����
	int savetime = 0, ans = 0;
	for (int i = 0; i < n; i++) {
		if (savetime <= a[i].second) {
			savetime = a[i].first;
			ans++;
		}
	}
	printf("%d", ans);

}
