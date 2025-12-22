#include <iostream>
#include<algorithm> // Min
using namespace std;
int main()
{
    //* MIN
    int a,b;
    cin >> a >> b;
    cout << min(a,b) << endl;
    cout << min({5, 20, 30, 40}) << endl;

    //* MAX
    cout << max(a,b) << endl;
    cout << max({5, 165, 25}) << endl;

    //* SWAP

    // int tem = a;
    // a = b;
    // b = tem;
    // cout << a << " " << b ;

    swap(a,b);
    cout << a << " " << b << endl;
    return 0;
}