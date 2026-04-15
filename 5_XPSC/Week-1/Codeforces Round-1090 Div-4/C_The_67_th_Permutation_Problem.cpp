#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        vector<int> a;
        int v = n * 3;

        for(int i = 0; i < n; i++)
        {
            a.push_back(i+1);
            a.push_back(v-1);
            a.push_back(v);
            v-=2;
        }

        for(int x : a)
            cout << x << " ";
        cout << '\n';
    }
    return 0;
}