//Problem-1: Running Sum of an Array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // prefix sum
    vector<int> ps(n);
    ps[0] = v[0];
    for(int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + v[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << ps[i] << " ";
    }

    return 0;
}