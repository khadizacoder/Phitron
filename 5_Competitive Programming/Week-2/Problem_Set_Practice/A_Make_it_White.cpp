// Problem link: https://codeforces.com/problemset/problem/1927/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        string st;
        cin >> st;

        int bcount = 0;
        int wcount = 0;
        for(int i = 0; i < N; i++)
        {
            if(st[i] == 'B')
            {
                for(int j = i; j < N; j++)
                    bcount++;
                break;
            }
        }

        if(st[N-1] == 'W')
        {
            for(int i = N-1; i >= 0; i--)
            {
                if(st[i] == 'B') break;
                wcount++;
            }
        }

        cout << bcount - wcount << "\n";

    }
    return 0;
}