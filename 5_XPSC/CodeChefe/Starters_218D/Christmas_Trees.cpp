#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, m, b;
    cin >> n >> a >> m >> b;

    int x = n * a;
    int y = m * b;
    cout << y - x << "\n";
    
    return 0;
}