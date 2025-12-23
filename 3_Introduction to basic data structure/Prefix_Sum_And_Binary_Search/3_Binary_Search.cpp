#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    while (q--)
    {
        int x = 0;
        cin >> x;
        int flag = 0;
        for(int i = 0; i < n; i++)
        {
            if(v[i] == x)
            {
                flag = 1;
            }
        }
        flag == 1 ? cout << "Found" << endl : cout << "Not found" << endl;
    }
    
    return 0;
}