#include <iostream>
using namespace std;

#define MAX 123456*2+1

int main()
{
    int num;
    int arr[MAX];
    int count = 0;

    for (int i = 2; i < MAX; i++)
        arr[i] = i;
    //에라토스테네스의 체
    for (int i = 2; i <= MAX; i++)
    {
        if (arr[i] == 0) continue;
        for (int j = i + i; j <= MAX; j += i)   //배수부터 출발
        {
            arr[j] = 0;
        }
    }

    while (1)
    {
        count = 0;
        cin >> num;
        if (num == 0)
        {
            break;
        }
        for (int i = num + 1; i <= 2 * num; i++)
        {
            if (arr[i] == i)
            {
                count++;
            }
        }            
        cout << count << endl;
    }

}