#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N, M;
        cin >> N >> M;

        int loop = N - M;
        int totalMinutes = 0;
        for(int i = 0; i < loop; i++)
        {
            totalMinutes+=N;
            N = N - 1;
        }
        cout << totalMinutes << '\n';
    }
    return 0;
}