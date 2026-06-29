#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        int ans;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            string st;
            cin >> st;
            for(int j = 0; j < x; j++)
            {

                if(st[j] == 'U') 
                    a[i]--;
                else if(st[j] == 'D')
                    a[i]++;
                if(a[i] < 0) a[i]+=10;
                if(a[i] > 9) a[i]-=10;
            }
        }

        for(int x : a)
            cout << x << " ";
        cout << '\n';
    }
    return 0;
}