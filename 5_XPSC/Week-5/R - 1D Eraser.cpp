#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int l = 0, r = 0, sum = 0;
        while(r < n)
        {
            if(s[r] == 'B')
            {
                if(r-l+1 == k)
                {
                    sum+=1;
                    l+=k;
                    r++;
                }
                else r++;
            }
            else
            {
                l++;
                r++;
            }
        }
        cout << sum << nl;
    }
    return 0;
}