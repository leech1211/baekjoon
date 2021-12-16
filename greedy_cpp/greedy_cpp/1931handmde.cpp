#define _CRT_SECURE_NO_WARNINGS //scanf
#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cout.tie(NULL);

    int meeting;      //������ ����
    int* meetstart;      //������ ���������� �����ϴ� �迭
    int* meetend;      //������ ���������� �����ϴ� �迭
    int firstend = 1000000000;      //������������� ������ ����ð�
    int lastend = 0;      //����ʰԳ����� ������ ����ð�
    int laststart = 0;         //���� �ʰԽ����ϴ� ȸ�ǽð�
    int count = 0;         //����ī��Ʈ
    int i = 0;
    int j = 0;
    int temp;
    int starttime = 0;      //���ð��� �ľǽ� ����ϴ� ���ý��۽ð� ����
    int endtime = 0;      //���ð��� �ľǽ� ����ϴ� ��������ð� ����
    int nextstart = 0;         //�������� �ľǽ� ����ϴ� ���ý��۽ð� ����
    int checking;         //�ߺ��Ǵ� ������ �ð� �Ǵܺ���
    int result = 0;

    scanf("%d", &meeting);
    meetstart = new int[meeting];
    meetend = new int[meeting];

    for (i = 0; i < meeting; i++)      //ȸ�ǽð� �Է�
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


    for (int k = 0; k < meeting - 1; k++)                  //���۽ð����� ����
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
    while (meetstart[i] < firstend)      //ȸ�������� ����� �� ã��
    {
        starttime = meetstart[i];      //ù������ ����,������ �ð�
        endtime = meetend[i];

        while (endtime < laststart)      //���� ����ȸ�ǰ� ���°��
        {

            checking = 0;
            count++;
            /*cout << "count: " << count << endl;
            cout << "starttime: " << starttime << endl;
            cout << "endtime: " << endtime << endl;*/

            for (j = 0; j < meeting; j++)      //����ȸ�� ã��
            {
                if (endtime <= meetstart[j])
                {
                    //�ٸ�ȸ���� ���� ���������ϴ� ȸ�� ã��

                    nextstart = meetstart[j];
                    checking = j;               //ã�Ƽ� �迭�� ��ġ�� check�� ����
                    //cout << "checking: " << checking << endl;
                    break;

                    //else if (nextstart == meetstart[j])      //����ȸ�� ���۽ð��� �������
                    //{
                    //    nextstart = (meetend[checking] > meetend[j]) ? meetend[j] : meetend[checking];      //���߿� ���� ������ ȸ�� ã��
                    //    checking = j;
                    //    cout << "checking: " << checking << endl;
                    //    cout << "nextstart: " << nextstart << endl;
                    //    cout << " meetstart[j]: " << meetstart[j] << endl;
                    //    cout << "meetend[j]: " << meetend[j] << endl;
                    //    cout << "j: " << j << endl;
                    //}

                }
            }
            starttime = meetstart[checking];      //����ȸ�Ƿ� ����,����ð� �ʱ�ȭ
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