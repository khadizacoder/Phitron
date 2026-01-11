// Problem 2: Equilibrium Index

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for(int i = 0; i < n; i++)
    {
        int leftsum = 0, rightsum = 0;
        for(int j = 0; j < i; j++)
        {
            leftsum += v[j];
        }

        for(int j = i+1; j < n; j++)
        {
            rightsum += v[j];
        }
        // cout << i << " " << leftsum << " " << rightsum;
        // cout << endl;
         if (leftsum == rightsum)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}

