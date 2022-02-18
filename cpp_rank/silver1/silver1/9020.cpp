#include <iostream>
using namespace std;
#define max 10000 + 1
int arr[max];			//main함수 안에 선언해주니 메모리를 초과하는 것으로 보임

int main()
{
	int testcase;
	int num;
	int temp1 = 0, temp2 = 0, dis = 0;			//dis는 num-소수 를 저장하는 변수
	int PrimeDis = 10000, prePrimeDis = 0;		//파티션이 여러가지인 경우 두 소수차이가 가장 작은것을 출력하기 위한 기억하는 변수
	int save1 = 0, save2 = 0;
	

	//에라토스테네스의 체
	for (int i = 2; i < max; i++)
		arr[i] = i;
	for (int i = 2; i <= max; i++)
	{
		if (arr[i] == 0)
			continue;
		for (int j = i + i; j <= max; j += i)
		{
			arr[j] = 0;
		}
	}

	

	cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		PrimeDis = 10000, prePrimeDis = 0;
		cin >> num;
		for (int k = 2; k <= num; k++)
		{
			prePrimeDis = PrimeDis;			//이전 소수 파티션의 차이를 저장
			if (arr[k] == k)				//소수를 찾음
			{
				dis = num - k;				
				if (arr[dis] == dis)		//num-k역시 소수인경우
				{
					temp1 = k;
					temp2 = dis;
					PrimeDis = temp2 - temp1;
					if (PrimeDis < 0)		//10 의 경우 3,7 5,5 7,3 이 경우가 있는데 소수간 차이가 가장 적은 조합을 구해야함
											//3-7 은 음수이므로 소수간의 차이를 양수로 바꾸어줌
					{
						PrimeDis *= -1;
					}
					if (prePrimeDis < PrimeDis)		//이전의 조합보다 소수간 차이가 작다면
					{
						temp1 = save1;				//이전의 소수 조합을 가져옴
						temp2 = save2;
					} 
					else							// 아니라면 일단 이번 조합 저장
					{
						save1 = temp1;
						save2 = temp2;
					}
				}

			}

		}
		cout << temp2 << " " << temp1 << endl;
	}
	return 0;
}