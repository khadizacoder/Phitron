#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    // for(int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    cout << *((v.begin()+k)-1);

    return 0;
}