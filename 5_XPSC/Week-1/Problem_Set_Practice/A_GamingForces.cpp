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

        int count = 0;
        double oneCount = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == 1) oneCount++;
            else count++;
        }

        int val = ceil(oneCount/2);
        cout << val + count << "\n";
    }
    return 0;
}