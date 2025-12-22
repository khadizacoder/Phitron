#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int sum = a + b;
    long long int mult = 1ll * a * b;
    int sub = a - b;

    cout << a << " + " << b << " = " << sum << endl;
    cout << a << " * " << b << " = " << mult << endl;
    cout << a << " - " << b << " = " << sub << endl;

    return 0;
}