#define _CRT_SECURE_NO_WARNINGS //scanf
#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cout.tie(NULL);

    int meeting;      //미팅의 개수
    int* meetstart;      //미팅의 시작정보를 저장하는 배열
    int* meetend;      //미팅의 종료정보를 저장하는 배열
    int firstend = 1000000000;      //가장먼저끝나는 미팅의 종료시간
    int lastend = 0;      //가장늦게끝나는 미팅의 종료시간
    int laststart = 0;         //가장 늦게시작하는 회의시간
    int count = 0;         //미팅카운트
    int i = 0;
    int j = 0;
    int temp;
    int starttime = 0;      //미팅개수 파악시 사용하는 미팅시작시간 변수
    int endtime = 0;      //미팅개수 파악시 사용하는 미팅종료시간 변수
    int nextstart = 0;         //다음미팅 파악시 사용하는 미팅시작시간 변수
    int checking;         //중복되는 끝나는 시간 판단변수
    int result = 0;

    scanf("%d", &meeting);
    meetstart = new int[meeting];
    meetend = new int[meeting];

    for (i = 0; i < meeting; i++)      //회의시간 입력
    {
        cin >> meetstart[i] >> meetend[i];
        if (meetend[i] > lastend)
        {
            lastend = meetend[i];
        }
        if (meetend[i] < firstend)
        {
            firstend = meetend[i];
        }
        if (meetstart[i] > laststart)
        {
            laststart = meetstart[i];
        }
    }


    for (int k = 0; k < meeting - 1; k++)                  //시작시간으로 정렬
    {
        for (int v = meeting - 1; v > k; v--)
        {
            if (meetstart[v - 1] > meetstart[v])
            {
                temp = meetstart[v - 1];
                meetstart[v - 1] = meetstart[v];
                meetstart[v] = temp;

                temp = meetend[v - 1];
                meetend[v - 1] = meetend[v];
                meetend[v] = temp;
            }

        }
    }





    i = 0;
    j = 0;
    while (meetstart[i] < firstend)      //회의조합의 경우의 수 찾기
    {
        starttime = meetstart[i];      //첫미팅의 시작,끝나는 시간
        endtime = meetend[i];

        while (endtime < laststart)      //다음 시작회의가 없는경우
        {

            checking = 0;
            count++;
            /*cout << "count: " << count << endl;
            cout << "starttime: " << starttime << endl;
            cout << "endtime: " << endtime << endl;*/

            for (j = 0; j < meeting; j++)      //다음회의 찾기
            {
                if (endtime <= meetstart[j])
                {
                    //다른회의중 가장 먼저시작하는 회의 찾기

                    nextstart = meetstart[j];
                    checking = j;               //찾아서 배열의 위치를 check에 저장
                    //cout << "checking: " << checking << endl;
                    break;

                    //else if (nextstart == meetstart[j])      //다음회의 시작시간이 같은경우
                    //{
                    //    nextstart = (meetend[checking] > meetend[j]) ? meetend[j] : meetend[checking];      //둘중에 먼저 끝나는 회의 찾기
                    //    checking = j;
                    //    cout << "checking: " << checking << endl;
                    //    cout << "nextstart: " << nextstart << endl;
                    //    cout << " meetstart[j]: " << meetstart[j] << endl;
                    //    cout << "meetend[j]: " << meetend[j] << endl;
                    //    cout << "j: " << j << endl;
                    //}

                }
            }
            starttime = meetstart[checking];      //다음회의로 시작,종료시간 초기화
            endtime = meetend[checking];
        }
        if (result < count)
        {
            result = count;
        }



        /*cout << "starttime: " << starttime << endl;
        cout << "endtime: " << endtime << endl;
        cout << endl;*/


        i++;
        count = 0;
    }

    printf("%d", result + 1);



    /*for (int i = 0; i < meeting; i++)
    {
       cout << meetstart[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < meeting; i++)
    {
       cout << meetend[i] << " ";
    }

    cout << endl;

    cout << "lastend : " << lastend << endl;

    cout << endl;

    cout << "firstend : " << firstend << endl;

    cout << endl;

    cout << "laststart : " << laststart << endl;*/




    delete[] meetstart;
    delete[] meetend;
}