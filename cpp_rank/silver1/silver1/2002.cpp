#include <iostream>
using namespace std;

int main()
{
	int testcar;
	int overtake = 0;						//�߿��� ���� ���

	cin >> testcar;

	string* inarr = new string[testcar];	//����
	string* outarr = new string[testcar];	//���ö�
	bool* passing = new bool[testcar];		//�߿� �ߴ°�?		
	int* innum = new int[testcar];	//���� ����
	int* outnum = new int[testcar];	//���ö� ����

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
	for (int i = testcar - 1; i >= 0; i--)		//�������� ���� �ǵ������� ���ʷ� 
	{
		for (int j = i - 1; j >= 0 ; j--)		//�ٷ� ����, �վ���,�վվ��� Ȯ��
		{
			if (outnum[i] < outnum[j])		//�Ա����� �ڽź��� �ڿ� �ִ� �����
			{
				passing[outnum[j]] = true;
				//cout << ":)" << endl;
			}
		}
	}

	for (int i = 0; i < testcar; i++)								//passing�� true��� �߿��� �ߴ�
	{
		if (passing[i] == true)
			overtake++;
	}
	
	cout << overtake;

	//for (int i = 0; i < testcar; i++)								//�Ա� �ⱸ ���� Ȯ�ο�
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
//�������� �� ���� ���� ���� �ڽ��� �ڿ��ִ� ���� �տ��ִ°�� �߿��� ����
//�� �������� �Ѵ뾿 ������ , �̹� �߿������� ���� �����ϰ� ī��Ʈ