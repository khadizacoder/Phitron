#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n;
        cin >> n;
        double car = ceill(n / 4);

        cout << car << endl;
    }
    
    return 0;
}