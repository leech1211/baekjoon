#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	int ropenum = 0;				//로프개수
	//int weekestrope = 100001;		//가장 약한 로프
	int product = 1;				//곱하기의 결과 
	int sum = 0;					//결과

	cin >> ropenum;

	int* arr = new int[ropenum];			//로프 하중 배열
	for (int i = 0; i < ropenum; i++)		//로프 하중 입력
	{
		cin >> arr[i];
		/*if (arr[i] < weekestrope)
		{
			weekestrope = arr[i];
		}*/
	}

	sort(arr,arr+ ropenum);

	//for (int i = 0; i < ropenum; i++)				//로프 하중순으로 정렬
	//{
	//	for (int j = 0; j < ropenum - 1; j++)
	//	{
	//		if (arr[j] > arr[j+1])
	//		{
	//			int temp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = temp;
	//		}
	//	}
	//}

	/*for (int i = 0; i < ropenum; i++)		
	{
		cout << arr[i] << endl;
	}*/

	for(int i = 0; i < ropenum; i++)
	{
		
		product = (ropenum - i) * arr[i];
		if (sum < product)
		{
			sum = product;
		}
		
	}

	cout << sum;

	

	delete[] arr;
	return 0;
}