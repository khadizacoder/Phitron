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

    int h, w, K; cin >> h >> w >> K;
    vector<string> a(h);
    for(int i = 0; i < h; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    for(int i = 0; i < h; i++)
    {
        vector<int> c(w, 0);

        for(int j = i; j < h; j++)
        {
            for(int k = 0; k < w; k++)
            {
                c[k]+= a[j][k] - '0';
            }

            unordered_map<int,int> freq;
            freq[0] = 1;
            int sum = 0;

            for(int k = 0; k < w; k++)
            {
                sum+=c[k];

                if(freq.count(sum - K))
                    ans+=freq[sum-K];

                freq[sum]++;
            }
        }
    }
    cout << ans << nl;
    return 0;
}