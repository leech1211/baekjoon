#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <iostream>
using namespace std;

int main()
{
	int testcase;
	long long x, y;
	long long distance;	//두 지점사이 거리 
	long long time;		//출력값
	long long product = 0;	//distance보다 작은 제곱 중 가장 큰 제곱
	long long product_root = 0;	//product의 제곱근
	

	scanf("%d", &testcase);
	//cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		time = 0;
		product_root = 0;
		product = 0;
		cin >> x >> y;
		distance = y - x;		

		for (;; product_root++)
		{
			if (distance <= product_root * product_root)
				break;
		}

		/*while (product < distance)
		{
			product_root++;
			product = product_root * product_root;

		}*/
		product_root--;
		product = product_root * product_root;

		//cout << "product: " << product << endl;
		
		time = 2 * product_root;
		if (distance > product + product_root)
		{
			time++;
		}

		printf("%d\n", time);

	}


}