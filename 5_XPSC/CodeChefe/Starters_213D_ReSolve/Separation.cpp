#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t; cin >> t;
    while(t--)
    {
        int n, x; cin >> n >> x;
        vector<int> a(n);

        for(int &i:a) 
        {
            cin >> i;
        }

        int up = 0, down = 0, eq = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == x) eq++;
            else if(a[i] > x) up++;
            else if(a[i] < x) down++;
        }

        if(up == 0 || down == 0)
        {
            cout << "Yes\n";
        }
        else{
            if(eq >= 1) cout << "Yes\n";
            else cout << "No\n";
        }
    }

    return 0;
}