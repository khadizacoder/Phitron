#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    cin >> x;
    if(x == 0)
    {
        cout << 0 << endl;
    }
    else{
        double discount = x * 0.20;
        long long int courseSell = ceil(100 / discount);
        cout << courseSell << endl;
    }
        
    return 0;
}