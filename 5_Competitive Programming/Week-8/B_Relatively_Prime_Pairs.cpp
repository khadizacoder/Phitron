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

    int l, r;
    cin >> l >> r;

    vector<bool> check(r+1, true);
    check[0] = false;
    check[1] = false;

    for(int i = 2; i*i <= r; i++)
    {
        if(check[i])
        {
            for(int j = i*i; j <= r; j+=i)
            {
                check[j] = false;
            }
        }
    }

    vector<int> noPrime;
    vector<int> prime;
    for(int i = l; i <= r; i++)
    {
        if(check[i])
            prime.push_back(i);
        else
            noPrime.push_back(i);
    }

    if(prime.size() >= 2) cout << "YES\n";

    if(l == 1 && r >= 2) 
        cout << 1 << " " << 2 << nl;

    int i = 1, j = r-1;
    int p = prime.size(); 
    int q = noPrime.size();
    // if(prime.size() <= noPrime.size())
    // {
    //     while (p != 2)
    //     {
    //         cout << prime[p-1] << " ";
    //         cout << noPrime[p-1] << " ";
    //         p--;
    //         cout << nl;
    //     }
    // }
    
    while(p != 1)
    {
        cout << prime[i] << " ";
        if(p >= 1 && q != 0)
            cout << noPrime[q-1] << " ";
        cout << nl;
        i++;
        q--;
    }
    

    return 0;
}