#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;

    if((60 * N) + K < 100*N)
        cout << (60*N) + K << '\n';
    else cout << 100*N << '\n';

    return 0;
}