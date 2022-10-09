#include <iostream>

using namespace std;

int main()
{
    int K, N;

    cin >> K;
    cin >> N;

    int arr[K];
    int result[K];

    for(int i = 0 ; i< K; i++)
    {
        arr[i] = i+1;
    }

    int live = 0;
    int idx = 0;
    int count = 1;

    while(live < K)
    {
        if (idx >= K)
            idx = 0;
        if(count > N)
            count =1;

        if (arr[idx] != 0)
        {
            if (count == N)
            {
                result[live] = arr[idx];
                arr[idx] = 0;
                live++;
                count = 1;
            }
            else
            {
                count++;
            }
        }

        idx++;
    }

    cout << "<";
    for(int i = 0 ; i < K; i++)
    {
        if(i < K-1)
            cout << result[i] << ", ";
        else
            cout << result[i];
    }
    cout << ">";


    return 0;
}