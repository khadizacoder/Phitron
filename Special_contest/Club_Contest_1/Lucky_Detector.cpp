#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;

    bool flag = false;
    while(n > 0)
    {
        long long int num = n % 10;

        if(num == 7)
        {
            flag = true;
            break;
        }

        n = n/10;
    }

    if(flag) cout << "Lucky" << endl;
    else cout << "Not Lucky" << endl;

    return 0;
}