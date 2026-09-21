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
        int n; cin >> n;
        vector<int> a(n);
        vector<int> one;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];

            if(a[i] == '1')
                one.push_back(a[i]);
        }

        if(one.empty())
        {
            for(int i = 0; i < n; i++) a[i] = 0;

            a[0] = 1;
            a[n-1] = 1;
        }
        else{
            for (int i = 0; i < n; i++) {
                if (a[i] == -1) a[i] = 0;
            }

            int first = one.front();
            int last = one.back();

            int left = first; 

            // ২. একদম ডানের ফাঁকা জায়গা (শেষ 1 থেকে ইন্ডেক্স n-1 পর্যন্ত)
            int right = (n - 1) - last; 

            int mx = 0;
            for (int i = 0; i < one.size() - 1; i++) {
                mx = max(mx, one[i + 1] - one[i]);
            }

            if (left >= right && left > mx) {
                a[0] = 1;
            } 
            else if (right > left && right > mx) {
                a[n - 1] = 1; 
            }
        }

        for(int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << nl;
    }

    return 0;
}