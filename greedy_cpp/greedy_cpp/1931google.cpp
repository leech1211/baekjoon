#include <iostream>
#include <vector>			//vector 사용
#include <algorithm>		//sort 사용

using namespace std;
int main() {
	int n;		//회의 개수
	cin >> n;		
	vector<pair<int, int>> a(n);		//2개의 각각 지정한 타입의 값을 저장한다	
										//저장한 값은 .fisrt와 .second로 각각 접근할 수 있다
										//두개의 연관된 값을 같이 저장할 수 있다
										//회의 시작시간과 종료시간을 저장


	for (int i = 0; i < n; i++) {		//입력을 받음
		cin >> a[i].second >> a[i].first;
	}
	sort(a.begin(), a.end());		//정렬
	int savetime = 0, ans = 0;
	for (int i = 0; i < n; i++) {
		if (savetime <= a[i].second) {
			savetime = a[i].first;
			ans++;
		}
	}
	printf("%d", ans);

}
