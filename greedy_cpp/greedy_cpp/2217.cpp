#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	int ropenum = 0;				//��������
	//int weekestrope = 100001;		//���� ���� ����
	int product = 1;				//���ϱ��� ��� 
	int sum = 0;					//���

	cin >> ropenum;

	int* arr = new int[ropenum];			//���� ���� �迭
	for (int i = 0; i < ropenum; i++)		//���� ���� �Է�
	{
		cin >> arr[i];
		/*if (arr[i] < weekestrope)
		{
			weekestrope = arr[i];
		}*/
	}

	sort(arr,arr+ ropenum);

	//for (int i = 0; i < ropenum; i++)				//���� ���߼����� ����
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