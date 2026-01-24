#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n >> k;

    long long int cho = k / n;
    long long int more_cho = k % n;

    cout << cho << " " << more_cho << endl;

    return 0;
}