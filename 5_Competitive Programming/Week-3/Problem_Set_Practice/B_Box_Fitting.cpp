// Problem link : https://codeforces.com/problemset/status?my=on

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        multiset<int> ms;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ms.insert(x);
        }

        int min_heigth = 1, w = m;
        while(!ms.empty())
        {
            auto it = ms.upper_bound(w);

            if(it != ms.begin())
            {
                it--;
                w-=*it;
                ms.erase(it);
            }
            else{
                min_heigth++;
                w=m;
            }
        }
        cout << min_heigth << '\n';
    }
    
    return 0;
}