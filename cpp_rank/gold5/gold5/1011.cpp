#define _CRT_SECURE_NO_WARNINGS //scanf��������
#include <iostream>
using namespace std;

int main()
{
	int testcase;
	long long x, y;
	long long distance;	//�� �������� �Ÿ� 
	long long time;		//��°�
	long long product = 0;	//distance���� ���� ���� �� ���� ū ����
	long long product_root = 0;	//product�� ������
	

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