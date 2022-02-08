#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int> > pq;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        pq.push(data);
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int data;
            cin >> data;
            pq.push(data);
        }
        for (int i = 0; i < n; i++)pq.pop();
    }
    cout << pq.top();
    return 0;
}


//#include <iostream>
//using namespace std;
//
//int bubble(int** arr, int last, int ArrSize)      //배열,요소의 개수,Arrsize
//{
//
//    int* narr = new int[last];       //1차원 배열 동적할당
//
//    int k = 0;
//    int temp;
//    for (int i = 0; i < ArrSize; i++)      //2차원배열을 1차원배열에 옮김
//    {
//        for (int j = 0; j < ArrSize; j++)
//        {
//            narr[k] = arr[i][j];
//            k++;
//        }
//    }
//
//
//
//    for (int i = 0; i < last; i++)         //bubble sort
//    {
//        for (int j = last-1; j > i; j--)
//        {
//            if (narr[j] < narr[j - 1])
//            {
//                temp = narr[j - 1];
//                narr[j - 1] = narr[j];
//                narr[j] = temp;
//            }
//        }
//    }
//
//    return narr[last - ArrSize ];
//    delete[] narr;                  //1차원 배열 메모리 해제
//}
//
//int main()
//{
//	int n;
//	int** arr;
//	int k = 0;
//	int temp;
//	cin >> n;
//	temp = n * n;
//	arr = new int*[n];
//	for (int i = 0; i < n; i++)
//		arr[i] = new int[n];
//
//
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//
//    cout << bubble(arr, temp, n);
//	
//
//	for (int i = 0; i < n; i++)
//	{
//		delete[] arr[i];
//	}
//	delete[] arr;
//	
//}