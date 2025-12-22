// jotokkhon input file a input thakbe totokkhon input nebo

#include <iostream>
#include <iomanip> // SETPRECISION
using namespace std;
int main()
{
    // EOF
    int x;
    while(cin >> x) // jotokkhon input pabe totokkhon input niba
    {
        cout << x << endl;
    }

    // SETPRECISION
    double d = 4.223348;
    // cout << d << endl;
    cout << fixed << setprecision(2) << d;

    return 0;
}