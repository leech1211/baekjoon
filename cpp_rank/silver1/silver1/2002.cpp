#include <iostream>
using namespace std;

int main()
{
	int testcar;
	int overtake = 0;						//추월한 차량 대수

	cin >> testcar;

	string* inarr = new string[testcar];	//들어갈때
	string* outarr = new string[testcar];	//나올때
	bool* passing = new bool[testcar];		//추월 했는가?		
	int* innum = new int[testcar];	//들어갈때 순서
	int* outnum = new int[testcar];	//나올때 순서

	for (int i = 0; i < testcar; i++)
	{
		cin >> inarr[i];
		innum[i] = i;
		passing[i] = false;
	}
	for (int i = 0; i < testcar; i++)
	{
		cin >> outarr[i];
		for (int k = 0; k < testcar; k++)
		{
			if (outarr[i] == inarr[k])
			{
				outnum[i] = k;
			}
		}
	}
	for (int i = testcar - 1; i >= 0; i--)		//나왔을때 기준 맨뒤차부터 차례로 
	{
		for (int j = i - 1; j >= 0 ; j--)		//바로 앞차, 앞앞차,앞앞앞차 확인
		{
			if (outnum[i] < outnum[j])		//입구에서 자신보다 뒤에 있던 차라면
			{
				passing[outnum[j]] = true;
				//cout << ":)" << endl;
			}
		}
	}

	for (int i = 0; i < testcar; i++)								//passing이 true라면 추월을 했다
	{
		if (passing[i] == true)
			overtake++;
	}
	
	cout << overtake;

	//for (int i = 0; i < testcar; i++)								//입구 출구 순서 확인용
	//{
	//	cout << "innum[" << i << "]: " << innum[i] << endl;
	//}
	//for (int i = 0; i < testcar; i++)
	//{
	//	cout << "outnum[" << i << "]: " << outnum[i] << endl;
	//}

	
	delete[] inarr;
	delete[] outarr;
	delete[] passing;
	delete[] innum;
	delete[] outnum;
}
//나왔을때 맨 뒷차 기준 들어갈때 자신의 뒤에있던 차가 앞에있는경우 추월로 간주
//맨 뒷차부터 한대씩 앞으로 , 이미 추월판정난 차는 제외하고 카운트