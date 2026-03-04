#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    int smallRoom = x * 30;
    int largeRoom = y * 60;

    cout << smallRoom+largeRoom << endl;
    
    return 0;
}