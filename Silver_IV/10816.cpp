#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    unordered_map<int, int> map;

    int N, M, input;

    cin >> N;

    for(int i = 0 ; i < N; i++)
    {
        cin >> input;
        map[input]++;
    }

    cin >> M;
    for(int i = 0; i < M; i++)
    {
        cin >> input;
        cout << map[input] << " ";
    }

    return 0;
}