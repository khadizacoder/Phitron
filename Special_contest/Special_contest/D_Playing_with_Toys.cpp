#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int toys = n - m;

    if(toys >= 0)
        cout << toys << endl;
    else cout << 0 << endl;

    return 0;
}